#include <stdio.h>
// Hàm in dãy so ra màn hình

void inDaySo(int a[], int n) {
    printf("Day so la: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", a[i]);
}

int main() {
 int a[] = {5, 7, 9, 11, 24, 10};
 int n = sizeof(a)/sizeof(a[0]);
 
    inDaySo(a, n);

 return 0;
}

