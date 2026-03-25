#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, sotieptheo;

    do {
        printf("Nhap so luong so Fibonacci (0 < n < 30): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 30);

    printf("Day so Fibonacci gom %d so la: ", n);

    if (n == 1) {
        printf("%lld", a);
    } else if (n >= 2) {
        printf("%lld %lld", a, b);
        for (i = 3; i <= n; ++i) {
            sotieptheo = a + b;
            printf(" %lld", sotieptheo);
            a = b;
            b = sotieptheo;
        }
    }

    printf("\n");
    return 0;
}
