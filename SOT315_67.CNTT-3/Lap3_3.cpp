#include <stdio.h>
#define MAX 100
void nhapDS(float a[], int *n);
void inDS(float a[], int n);
float tinhTong(float a[], int n);
float tinhTBCong(float a[],int n);

int main() {
	float a[MAX];
	int n;
	nhapDS(a, &n);
	inDS(a, n);
	printf("\nTong Day so la %.2f\n", tinhTong(a,n));
	printf("\nTBC cac so duong la %.2f\n", tinhTBCong(a,n));
 return 0;
}

void nhapDS(float a[], int *n){
    do {
        printf("Nhap so phan tu n (3 < n <= 100): ");
        scanf("%d", n);
    }while (*n <= 3 || *n > 100);
	int i;
    for( i = 0; i < *n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void inDS(float a[], int n){
	int i;
    for (i = 0; i < n; i++) {
        printf("%.1f", a[i]);
    }
}

float tinhTong(float a[],int n){
	float s = 0;
	int i;
	for(i = 0; i < n; i++) {
	
		s = s +a[i];
	return s;
	}
}

float tinhTBCong(float a[],int n){
	float s = 0;
	int i, c = 0;
	for(i = 0;i < n; i++)
		if(a[i] > 0){
			s = s + a[i];
			c++;
		}
		return c/s;
}

