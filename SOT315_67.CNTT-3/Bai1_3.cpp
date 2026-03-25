#include <stdio.h>

int main() {
    int nam;
// nhap nam
    printf("Nhap vao nam duong lich: ");
//%d so nguyen %f so thuc
    scanf("%d", &nam);
//neu nam <0 thi ko hop le
    if (nam > 0) {
// neu nam chia het cho 400 hoac ( 4 nhung ko chia het cho 100 )
        if (nam % 400 ==0 || (nam % 4 ==0 && nam % 100 != 0 )) {
            printf("Nam %d la nam nhuan", nam);
        } else {
            printf("Nam %d khong phai la nam nhuan", nam);
        }
    } else {
        printf("Nam khong hop le");
    }

    return 0;
}

