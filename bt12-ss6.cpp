#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=0,b=1,next_num,n;
	printf("Nhap n so fibonacci muon hien thi: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("So nhap vao phai la so nguyen duong");
	}
	else
	{
	printf("Day so fibonacci: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a);
		next_num=a+b;
		a=b;
		b=next_num;
	}
	}
	return 0;
}
