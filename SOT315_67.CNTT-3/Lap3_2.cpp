#include <stdio.h>
#define MAX 50
void nhapDS(int a[], int *n);
void inDS(int a[], int n);
void inDaoDS(int a[], int n);

int main() {
	int a[MAX], n;
	nhapDS(a, &n);
	inDS(a, n);
	inDaoDS(a, n);
	
 return 0;
}

void nhapDS(int a[], int *n){
    do {
        printf("Nhap so phan tu n (2 < n < 50): ");
        scanf("%d", n);
    }while (*n <= 2 || *n >= 50);
	int i;
    for( i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void inDS(int a[], int n){
	int i;
    for (i = 0; i < n; i++) {
        printf("%6d", a[i]);
    }
}
void inDaoDS(int a[], int n){
	int i;
    for (i = n-1; i >= 0; i--) 
        printf("%6d", a[i]);
}

