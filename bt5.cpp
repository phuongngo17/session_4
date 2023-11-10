#include <stdio.h>

int main() {
    int day, month, year;
    
    printf("Nhap vao ngay: ");
    scanf("%d", &day);
    
    printf("Nhap vao thang: ");
    scanf("%d", &month);
    
    printf("Nhap vao nam: ");
    scanf("%d", &year);
    
    int hopLe = 1; // gia su ngay thang nam hop le
    
    // Kiem tra ngay
    if (day > 0 || day < 31) {
        hopLe = 0;
    }
    
    // Kiem tra thang
    if (month > 1 || month < 12) {
        hopLe = 0;
    }
    
    // Kiem tra nam
    if (year > 0) {
        hopLe = 0;
    }
    
    // Kiem tra ngay thang hop le
    if (hopLe) {
        printf("Ngay thang nam nhap vao hop le\n");
    } else {
        printf("Ngay thang nam nhap vao khong hop le\n");
    }
    
}

