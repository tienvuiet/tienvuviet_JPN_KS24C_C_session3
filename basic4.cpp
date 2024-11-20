#include<stdio.h> 
int main(){
    float diemtoan;
    float diemvan;
	float diemanh ;
	printf("nhap vao diem toan: ");
	scanf("%f",&diemtoan ) ;
	printf("nhap vao diem van: ");
	scanf("%f",&diemvan ) ;
	printf("nhap vao diem anh: ");
	scanf("%f",&diemanh ) ;
	float tongdiem=diemtoan+diemvan+diemanh;
	float diemtrungbinh=tongdiem/3;
	printf("tong diem la:%f\n ",tongdiem);
	printf("diem trung binh la:%f ",diemtrungbinh);
	return 0; 
	 
} 
