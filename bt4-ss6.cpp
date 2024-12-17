#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b,c;
	printf("Nhap vao 3 so a,b,c: \n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0)
	{
		//bx+c=0
	    if(b==0 && c==0)
	    {
	    	printf("Phuong trinh vo so nghiem");
		}
		else if(b==0 && c!=0)
		{
			printf("Phuong trinh vo nghiem");
		}
		else
		{
			float x=-c/b;
			printf("Phuong trinh co mot nghiem la x=%.2f",x);
		}
	}
	else
	{
		float delta=pow(b,2)-4*a*c;
		if(delta<0)
		{
			printf("Phuong trinh vo nghiem");
		}
		else if(delta==0)
		{
			float nKep=-b/(2*a);
			printf("Phuong trinh co nghiem kep x1,x2=%.2f",nKep);
		}
	    else
		{
			float x1=(-b-sqrt(delta))/(2*a);
			float x2=(-b+sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet la\n");
			printf("x1=%.2f\n",x1);
			printf("x2=%.2f\n",x2);
		}
	}
	return 0;
}
