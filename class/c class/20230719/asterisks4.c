#include <stdio.h>




int main(){
	int n;
	scanf("%d", &n);

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < i; ++j){
			putchar(' ');
		}
		for(int j = n - i; j > 0; --j){
			printf("* ");
		}
		putchar('\n');
	}
	for(int i = 2; i <= n; ++i){
		for(int j = n - i; j > 0; --j){
			putchar(' ');
		}
		for(int j = 0; j < i; ++j){
			printf("* ");
		}
		putchar('\n');
	}

	return 0;
}