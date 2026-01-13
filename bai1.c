/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
    // Khai báo biến
    int a, b, sum, diff;

    // Nhập dữ liệu
    printf("Nhap hai so a va b: ");
    scanf("%d %d", &a, &b);

    // Xử lý, tính toán
    sum = a + b;
    diff = a - b;

    // Hiển thị kết quả
    printf("Tong cua hai so la: %d\n", sum);
    printf("Hieu cua hai so la: %d\n", diff);
    return 0;
}