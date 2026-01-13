/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
    // Khai báo biến
    int a,b,chuvi,dientich;
    // Nhập dữ liệu
    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%d", &a);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%d", &b);

    // Xử lý, tính toán
    chuvi = 2 * (a + b);
    dientich = a * b;

    // Hiển thị kết quả
    printf("Chu vi hinh chu nhat la: %d\n", chuvi);
    printf("Dien tich hinh chu nhat la: %d\n", dientich);
return 0;
}