#include <stdio.h>




int main(){
	int bal;
	printf("�Ѵ� �뵷�� �Է����ּ���: ");
	scanf("%d", &bal);

	int p1, p2, p3;
	printf("�� ���� 3���� ������ �Է����ּ���: ");
	scanf("%d %d %d", &p1, &p2, &p3);

	int temp;
	if(p1 < p2 && p1 < p3){
		temp = p1;
		p1 = p3;
		p3 = temp;
	}
	else if(p2 < p3){
		temp = p2;
		p2 = p3;
		p3 = temp;
	}


	int case_cnt = 0;

	bal -= p1 + p2 + p3;
	int p1_maxCnt = bal/p1, p2_maxCnt;
	for(int i = 0; i <= p1_maxCnt; ++i){
		p2_maxCnt = (bal - p1*i)/p2;
		for(int j = 0; j <= p2_maxCnt; ++j){
			++case_cnt;
		}
	}

	printf("\n%d", case_cnt);


	return 0;
}