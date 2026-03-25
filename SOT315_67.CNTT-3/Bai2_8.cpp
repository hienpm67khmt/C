#include <stdio.h>

void thayDoi(int **p) {
    **p = 100;
}

int main() {
    int a = 10;
    int *p = &a;

    printf("Gia tri ban dau cua a: %d\n", a);

    thayDoi(&p);

    printf("Gia tri sau khi thay doi: %d\n", a);

    return 0;
}
