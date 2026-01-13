/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
    // Khai báo biến
    float r, chuvi, dientich;
    // Nhập dữ liệu
    printf("Nhap ban kinh duong tron: ");
    scanf("%f", &r); 
    // Xử lý, tính toán
    chuvi = 2 * 3.14159 * r;
    dientich = 3.14159 * r * r;
    // Hiển thị kết quả
    printf("Chu vi hinh tron la: %.2f\n", chuvi);
    printf("Dien tich hinh tron la: %.2f\n", dientich);
return 0;   
}