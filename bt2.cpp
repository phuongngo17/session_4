
#include<stdio.h>
int main(){
	int a,b,c;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("nhap c:");
	scanf("%d",&c);
	if (a <= 0 || b <= 0 || c <= 0) {
        printf("Canh phai lon hon 0.\n");
    } else {
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                printf("Tam giac deu.\n");
            } else if (a == b || b == c || c == a) {
                printf("Tam giac can.\n");
            } else if (a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c) {
                printf("Tam giac vuong.\n");
            } else {
                printf("Tam giac thuong.\n");
            } else {
            printf("Khong phai 3 canh cua tam giac.\n");
           }
       }
    }    	
}

