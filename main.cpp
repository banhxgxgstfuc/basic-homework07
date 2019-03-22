#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int i,a,sum=0;
	printf("請輸入一個整數:");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	sum+=i;
	printf("1+2+3+...+%d=%d",a,sum);
	return 0;
}
