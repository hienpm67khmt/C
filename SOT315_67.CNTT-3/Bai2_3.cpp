#include <stdio.h>

int tinhTong(int a, int b, int n) {
    int tong = 0;

    for (int i = 1; i < n; i++) {
        if (i % a == 0 && i % b != 0) {
            tong += i;
        }
    }

    return tong;
}

int main() {
    int a, b, n;

    printf("Nhap a (Dieu kien 0 < a, b < n) : ");
    scanf("%d", &a);

    printf("Nhap b (Dieu kien 0 < a, b < n) : ");
    scanf("%d", &b);

    printf("Nhap n (Dieu kien 0 < a, b < n) : ");
    scanf("%d", &n);

    if (a <= 0 || b <= 0 || a >= n || b >= n) {
        printf("Dieu kien 0 < a, b < n khong thoa man!\n");
        return 0;
    }

    int ketQua = tinhTong(a, b, n);

    printf("Tong can tim la: %d\n", ketQua);

    return 0;
}
