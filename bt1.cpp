#include<stdio.h>
int main(){
	int number;
	printf("nhap vao 1 so:");
	scanf("%d",&number);
	if(number%3==0 && number%5==0){
		printf("%d la so chia het cho 3 va 5");
	}
}
