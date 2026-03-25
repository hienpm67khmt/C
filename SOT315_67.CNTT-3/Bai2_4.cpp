#include <stdio.h>

//
long long giaithua(int n) {
    if (n < 0) return -1;
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}
//
long long kethop(int n, int k) {
    if (k < 0 || k > n) return 0;
    return giaithua(n) / (giaithua(k) * giaithua(n - k));
}



//
int main() {
    int n, k;
    printf("Nhap so nguyen duong n (n, k phai la so nguyen duong va k <= n ) : ");
    scanf("%d", &n);
    printf("Nhap so nguyen duong k (n, k phai la so nguyen duong va k <= n) : ");
    scanf("%d", &k);

    if (n >= 0 && k >= 0 && k <= n) {
        printf("Giai thua cua n la: %lld\n", giaithua(n));
        printf("To hop chap k cua n la: %lld\n", kethop(n, k));
    } else {
        printf("Du lieu nhap khong hop le (n, k phai la so nguyen duong va k <= n).\n");
    }

    return 0;
}
