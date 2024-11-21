#include<stdio.h>

int main(){
	float a,b,c,T,TB;	
	printf("nhap diem toan : ");
	scanf("%f",&a);
	printf("nhap diem anh : ");
	scanf("%f",&b);
	printf("nhap diem van : ");
	scanf("%f",&c);
	T=a+b+c;
	TB=T/3;
	printf("diem tong la %.2f\n",T);
	printf("diem tring binh la la %.2f",TB);
	
	return 0;
}
