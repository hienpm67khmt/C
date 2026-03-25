#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Nhap so thu nhat: ");
    scanf("%d", &x);

    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    swap(&x, &y);

    printf("Sau khi hoan doi:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
