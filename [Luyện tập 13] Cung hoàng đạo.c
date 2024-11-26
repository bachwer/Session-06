#include <stdio.h>
int main() {
    int day, month;
    
    printf("Nhập ngày sinh: ");
    scanf("%d", &day);
    
    printf("Nhập tháng sinh: ");
    scanf("%d", &month);
    
     if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Cung hoàng đạo: Bạch Dương\n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Cung hoàng đạo: Kim Ngưu\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Cung hoàng đạo: Song Tử\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Cung hoàng đạo: Cự Giải\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Cung hoàng đạo: Sư Tử\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Cung hoàng đạo: Xử Nữ\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Cung hoàng đạo: Thiên Bình\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Cung hoàng đạo: Bọ Cạp\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Cung hoàng đạo: Nhân Mã\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Cung hoàng đạo: Ma Kết\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Cung hoàng đạo: Bảo Bình\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Cung hoàng đạo: Song Ngư (Pisces)\n");
    } else {
        printf("invalid\n");
    }
  
    return 0;
}



