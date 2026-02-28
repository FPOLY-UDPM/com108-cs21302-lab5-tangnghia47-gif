/******************************************************************************
 * Họ và tên: [Tăng Trung Nghĩa]
 * MSSV:      [PS49682]
 * Lớp:       [CS302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 #include <stdio.h>

// Tạo hàm kiểm tra năm nhuận
int laNamNhuan(int nam) {
    if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
        return 1;   // là năm nhuận
    } else {
        return 0;   // không phải năm nhuận
    }
}

int main() {
    int nam;

    // Nhập năm
    printf("Nhap vao nam: ");
    scanf("%d", &nam);

    // Gọi hàm và kiểm tra
    if (laNamNhuan(nam) == 1) {
        printf("%d la nam nhuan\n", nam);
    } else {
        printf("%d khong phai la nam nhuan\n", nam);
    }

    return 0;
}


//Tạo hàm 




