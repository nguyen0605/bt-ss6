#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int number, sum_even=0, sum_odd=0;
	for(int i=1;i<=5;i++)
	{
		printf("Nhap vao so nguyen thu %d: ",i);
		scanf("%d",&number);
		if(number%2==0)
		{
			sum_even++;
		}
		else
		{
			sum_odd++;
		}
	}
	printf("So luong so chan la: %d\n", sum_even);
	printf("So luong so le la: %d", sum_odd);
	return 0;
}
