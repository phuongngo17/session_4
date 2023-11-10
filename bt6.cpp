#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    printf("Nhap vao so thu nhat: ");
    scanf("%d", &num1);
    
    printf("Nhap vao so thu hai: ");
    scanf("%d", &num2);
    
    printf("Nhap vao so thu ba: ");
    scanf("%d", &num3);
    
    int temp;
    
    // Sap xep cac so theo thu tu giam dan
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    if (num2 < num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    
    if (num1 < num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    // In ra ket qua
    printf("Cac so theo thu tu giam dan: %d %d %d\n", num1, num2, num3);
    
   
}

