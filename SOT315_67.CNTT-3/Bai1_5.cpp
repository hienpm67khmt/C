#include <stdio.h>

int main() {
    int thang, nam, ngay;
//khai bao bien
	printf("nhap Thang (1-12): ");
	scanf("%d", &thang);
	printf("nhap nam : ");
	scanf("%d", &nam);
	
	
	if (nam <= 0 || thang<1 || thang >12) {
		printf("nam khong hop le hoac thang khong hop le ");
		return 0;
	}
	switch (thang){
		case 1:case 3: case 5:case 7:case 8: case 10:case 12:
			ngay = 31;
			break;
		case 4:case 6: case 9:case 11:
			ngay = 30;
			break;
		case 2:
		
		 if (nam % 400 ==0 || (nam % 4 ==0 && nam % 100 != 0 )) {
            ngay= 29;
        } else {
            ngay= 28;
            break;
        }
    }
    printf("Thang %d nam  %d co %d ngay", thang,nam,ngay);
    return 0;
}
