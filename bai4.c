/******************************************************************************
 * Họ và tên: [NGUYỄN HUỲNH ANH QUÂN]
 * MSSV:      [PS48285]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
    // Khai báo biến
    float toan, ly, hoa, diemTB;
    // Nhập dữ liệu
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);
    printf("Nhap diem mon Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &hoa);  

    // Xử lý, tính toán
    diemTB = (toan * 3 + ly * 2 + hoa * 1) / (3 + 2 + 1);

    // Hiển thị kết quả
    printf("Diem trung binh la: %.2f\n", diemTB);
return 0;
}