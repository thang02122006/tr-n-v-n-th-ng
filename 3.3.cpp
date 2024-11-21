#include<stdio.h>

int main(){
	float r,C,D;
	float pi=3.14;
	printf("nhap ban kinh : ");
	scanf("%f",&r);
	C=2*pi*r;
	D=pi*r*r;
	printf("chu vi cua hinh tron la %.2f\n",C);
	printf("dien tich cua hinh tron la %.2f",D);
	
	return 0;
}
