#include <stdio.h>




int main(){
	int a = 10;
	double b = 3.4;

	printf("int�� ������ ũ�� : %zd\n", sizeof(a));
	printf("double�� ������ ũ�� : %zd\n", sizeof(b));
	printf("������ ����� ũ�� : %zd\n", sizeof(10));
	printf("������ ������� ũ�� : %zd\n", sizeof(1.5 + 3.4));
	printf("char �ڷ����� ũ�� : %zd\n", sizeof(char));

	return 0;
}