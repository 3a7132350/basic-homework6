#include <stdio.h>
#include<stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int y;
	printf("請輸入一個整數:");
	scanf("%d",&y);
	if((y % 4==0)&&(y%100 !=0)||(y % 400==0))
	printf("%d是閏年",y);
	else
	printf("%d是平年",y);
	return 0;
}
