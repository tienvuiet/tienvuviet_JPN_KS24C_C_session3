#include<stdio.h> 
int main(){
    float R;
    float pi=3.14; 
	printf("nhap vao ban kinh R: ");
	scanf("%f",&R); 
	float chuVi= 2*pi*R;
	float dienTich=pi*R*R; 
	printf("chu vi la: %.2f\n", chuVi) ;
	printf("dien tich la: %.2f", dienTich) ;
	return 0; 
	 
} 
