#include <stdio.h>

int main() {
    int nam, ngay;
// nhap nam
    printf("Nhap vao nam: ");
    scanf("%d", &nam);
// cong thuc
	ngay = (nam + ((nam-1)/4)- ((nam-1)/100 ) + ((nam-1)/400 )) % 7 ; 
	printf(" ngay : %d ",ngay);
	
   return 0;
}
