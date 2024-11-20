#include<stdio.h> 
int main(){
	char address[100]; 
	printf("nhap vao ho va ten :");
	gets(address);
	printf("ho va ten cua ban la: %s",address);
	fflush(stdin);
	return 0; 
	 
} 
