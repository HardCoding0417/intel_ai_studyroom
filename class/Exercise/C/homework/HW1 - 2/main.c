#include <stdio.h>




int main(){
	double weight, height;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf_s("%lf %lf", &weight, &height);

	double BMI = weight/(height*height/10000.);

	printf("%s", BMI >= 20.0 && BMI < 25.0 ? "ǥ�� �Դϴ�." : "ü�߰����� �ʿ��մϴ�.");

	return 0;
}