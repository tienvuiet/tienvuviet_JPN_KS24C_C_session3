#include<stdio.h>
int main (){
	int n;
	int tong; 
	printf("nhap vao so tu nhien co 4 chu so n: ");
	scanf("%d",&n);
	int n1=(n/1000);
	int n2=(n/100)%10;
	int n3=(n/10)%10;
	int n4=n%10;
	int n5=n4*1000;
	int n6=n3*100;
	int n7=n2*10;
	tong=n1+n7+n6+n5; 
	printf("ket qua cua phep toan la: %d",tong); 
	
	
	return 0;
}
