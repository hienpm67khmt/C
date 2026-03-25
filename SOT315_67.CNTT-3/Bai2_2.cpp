#include <stdio.h>

float tinhS(int n) {
    float S = 0;
    for (int i = 1; i <= n; i++) {
        S += 1.0 / i;
    }
    return S;
}

float tinhT(int n) {
    float T = 0;
    for (int i = 1; i <= n; i++) {
        T += 1.0 / (i * i);
    }
    return T;
}

int main() {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n phai la so nguyen duong!\n");
        return 0;
    }

    float S = tinhS(n);
    float T = tinhT(n);

    printf("Tong S = %.4f\n", S);
    printf("Tong T = %.4f\n", T);

    return 0;
}
