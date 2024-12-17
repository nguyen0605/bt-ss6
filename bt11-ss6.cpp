#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,count=0,check_num=2;
	printf("Nhap n: ");
	scanf("%d",&n);
	while(count<n)
	{
		int isPrime=1;
		for(int i=2;i<=sqrt(check_num);i++)
		{
			if(check_num%i==0)
			{
				isPrime=0;
			}
		}
		if(isPrime)
		{
			count++;
			printf("%d ",check_num);
		}
		check_num++;
	}
	return 0;
}
