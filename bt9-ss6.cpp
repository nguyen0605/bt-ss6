#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sum,check_num,temp;
	for(int number=100;number<1000;number++)
	{
		sum=0;
		check_num=number;
		while(check_num>0)
		{
			temp=check_num%10;
			sum=sum+ pow(temp,3);
			check_num/=10;
		}
		if(sum==number)
		{
			printf("%d\n",sum);
		}
	}
	return 0;
}
