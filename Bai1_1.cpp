#include <stdio.h>

int main() {
// khai bao bien
    float C, F;
    printf("Nhap vao nhiet do C: "); 
// nhap nhiet do C
    scanf("%f", &C);
// gan vao C
    F = (9 / 5) * C + 32;
// cong thuc
    printf("%f oC = %f oF", C, F);
//in ra
    return 0;
}

