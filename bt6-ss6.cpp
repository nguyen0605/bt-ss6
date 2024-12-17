#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	for(int i=1;i<=100;i++)
	{
		if(i%3==0 && i%5==0) 
		{
			printf("FizzBuzz\n");
			continue;
		}
		else if(i%5==0)
		{
			printf("Buzz\n");
			continue;
		}
		else if(i%3==0)
		{
			printf("Fizz\n");
			continue;
		}
		else printf("%d\n",i);
	}
	return 0;
}
