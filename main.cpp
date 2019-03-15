#include <stdio.h>
#include<stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a;
	int b=1;
	int c=2;
	printf("請輸入一個整數:");
	scanf("%d,%d,%d",&a,&b,&c);
	printf("1+2+3+...+%d=%d\n",a,((b+a)*a)/c);                                           ;
	system("pause");                                     
	return 0;
}  
