#include <stdio.h>




int main(){
	printf("�� ���� ���ǰ��� �Է��ϼ��� : ");

	int price1, price2, price3;
	scanf_s("%d %d %d", &price1, &price2, &price3);

	int change = 10000 - price1 - price2 - price3;
	printf("�Ž������� %d���Դϴ�.\n", change);

	printf("��õ���� : %d��\n", change/5000);
	change %= 5000;
	printf("õ���� : %d��\n", change/1000);
	change %= 1000;
	printf("�����¥�� ���� : %d��\n", change/500);
	change %= 500;
	printf("���¥�� ���� : %d��\n", change/100);
	change %= 100;
	printf("���ʿ�¥�� ���� : %d��\n", change/50);
	change %= 50;
	printf("�ʿ�¥�� ���� : %d��", change/10);

	return 0;
}