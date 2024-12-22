#include <stdio.h>

int main() {
    int day, month, year;
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

   	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		{
			day=31; 
				printf("Thang %d nam %d co %d ngay ",month,year,day);
			}
		
		else if(month==2)
		{    
		if((year%4==0&&year%100!=0) || (year%100==0&&year%400==0)) {
		day=29;
			
				printf("Thang %d nam %d co %d ngay \n",month,year,day);
				printf("nam %d la nam nhuan\n",year);
				return 0;
			
		}
		else 
			{
				day=28;
					printf("Thang %d nam %d co %d ngay ",month,year,day);
					
			}}
		else if(month==4 || month==6 || month==9 || month==11) {
		day=30;
			printf("Thang %d nam %d co %d ngay ",month,year,day);
			
			
		}
    return 0;
}

