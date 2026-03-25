#include <stdio.h>
#define MAX 40

void NhapDS(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", a + i);
    }
}
void InDS(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));   
// dùng con tro
    }
    printf("\n");
}
int KiemTra(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(i % 2 != 0 && *(a + i) <= 0)
            return 0;
    }
    return 1;
}
void ThayThe(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(*(a + i) % 3 == 0)
            *(a + i) = 5;
    }
}
int main()
{
    int a[MAX], n;

    do {
        printf("Nhap n (3 < n <= 40): ");
        scanf("%d", &n);
    } while(n <= 3 || n > 40);

    NhapDS(a, n);

    printf("\nDay So vua nhap:\n");
    InDS(a, n);

    if(KiemTra(a, n))
        printf("Cac phan tu vi tri le deu duong\n");
    else
        printf("Co phan tu vi tri le khong duong\n");

    ThayThe(a, n);

    printf("\nDay so sau khi thay the:\n");
    InDS(a, n);

    return 0;
}
