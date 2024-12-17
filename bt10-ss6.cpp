#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, isPrime=1;
	printf("Nhap vao mot so nguyen bat ki: ");
	scanf("%d",&n);
	if(n<=1)
	{
		printf("%d khong phai la so nguyen to!",n);
	}
	else
	{
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime)
    	{
		    printf("%d la so nguyen to!",n);
    	}
    	else 
    	{
        	printf("%d khong phai la so nguyen to!",n);
        }
	}
	return 0;
}
