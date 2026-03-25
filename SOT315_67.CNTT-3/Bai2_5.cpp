#include <stdio.h>

void tinhHCN(float d, float r, float *dienTich, float *chuVi) {
    *dienTich = d * r;
    *chuVi = 2 * (d + r);
}

int main() {
    float d, r;
    float dienTich, chuVi;

    printf("Nhap chieu dai: ");
    scanf("%f", &d);

    printf("Nhap chieu rong: ");
    scanf("%f", &r);

    if (d > 0 && r > 0) {
        tinhHCN(d, r, &dienTich, &chuVi);
        printf("Dien tich = %.2f\n", dienTich);
        printf("Chu vi = %.2f\n", chuVi);
    } else {
        printf("Gia tri khong hop le");
    }

    return 0;
}
