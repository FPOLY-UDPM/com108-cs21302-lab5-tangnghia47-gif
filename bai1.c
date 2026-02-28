/******************************************************************************
 * Họ và tên: [Tăng Trung Nghĩa]
 * MSSV:      [PS49682]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>

// Tạo hàm tìm số lớn nhất trong 3 số
int timSoLonNhat(int so1, int so2, int so3) {
    int max = so1;   // Giả sử số đầu tiên là lớn nhất

    if (so2 > max) {
        max = so2;
    }

    if (so3 > max) {
        max = so3;
    }

    return max; // Trả về số lớn nhất
}

int main() {
    int a, b, c;

    // Nhập 3 số từ bàn phím
    printf("Nhap 3 so: ");
    scanf("%d %d %d", &a, &b, &c);

    // Gọi hàm
    int soMax = timSoLonNhat(a, b, c);

    // Xuất kết quả
    printf("So lon nhat la: %d", soMax);

    return 0;
}


// //Tạo hàm 
// int tenHam(so1, so2, so3){ 
// int max; 
// //Cách giải để tìm ra số lớn nhất 
// return max; 
// } 



    // //Gọi hàm trong hàm main 
    // //ví dụ 
    // int soMax = temHam(3,5,10)
    
 
