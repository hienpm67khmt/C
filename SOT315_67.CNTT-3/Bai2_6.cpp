#include <stdio.h>

int main() {
    float a = 3.5;
    float *p;

    p = &a;

    printf("Gia tri cua a thong qua con tro p: %.1f\n", *p);
    printf("Dia chi cua a thong qua con tro p: %p\n", p);

    *p = 10.8;

    printf("Gia tri moi cua a: %.2f\n", a);

    return 0;
}
