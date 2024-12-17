#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int password=12345,input_pass;
	do
	{
		printf("Nhap mat khau(Gom 5 so): ");
		scanf("%d",&input_pass);
		if(input_pass==password)
		{
			printf("Mat khau dung!\n");
			break;
		}
		else
		{
			printf("Mat khau sai!\n");
		}
	}while(input_pass!=password); 
	return 0;
}
