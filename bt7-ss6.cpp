#include <iostream>
#include <stdio.h>
int main() {
    int n;
    printf("Moi ban nhap vao 1 so nguyen: ");
    scanf("%d",&n);
    	printf("Cac uoc cua %d la: ",n);
    for(int i=1;i<=n;i++)
    if (n%i==0){
    	printf(" %d",i);
	}
    return 0;
}

