#include <stdio.h>

float tinh(float a, float b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                printf("Loi: ko chia duoc cho 0!\n");
                return 0; 
            }
        default:
            printf("Loi: Phep toan khong hop le!\n");
            return 0; 
    }
}
int main() {
    float a, b;
    char op;

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    printf("Nhap phep toan (+ - * /): ");
    scanf(" %c", &op);

    printf("Ket qua: %.2f\n",tinh(a, b, op) );

    return 0;
}
