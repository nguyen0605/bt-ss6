#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number, sum=0;
	for(int i=1;i<=5;i++)
	{
		printf("Nhap vao so nguyen thu %d: ",i);
		scanf("%d",&number);
		if(number%2!=0)
		{
			sum+=number;
		}
	}
	printf("Tong cac so le trong 5 so la %d",sum);
	return 0;
}
