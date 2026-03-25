#include <stdio.h>
//KIEMTRA BOi
int KTBoi(int x,int y){
	return (x % y == 0);
	
}
//HOANDOI
void HoanDoi(int *x, int *y){
	int hoandoi;
	hoandoi = *x;
	*x = *y; 
	*y = hoandoi;
}
//UCLN
int UCLN(int x, int y) {
    while (y != 0){
    	int z = x % y;
    	x = y;
    	y = z;
	}
	return x;
}

//BCNN
int BCNN(int x, int y) {
	return x * y / UCLN(x,y); 
// BCNN = x.y / uCLN
}


// chuong trinh chinh
int main(){
	int x, y;
	printf("nhap hai so nguyen x: ");
	scanf("%d", &x);
	printf("nhap hai so nguyen y: ");
	scanf("%d", &y);
	
// a

	if(KTBoi(x,y) ==0 )
		printf("%d khong phai la boi cua %d",x,y);
	else
		printf("%d la boi cua %d",x,y);
		
// b

	HoanDoi(&x,&y);
	printf("\nSau khi hoan doi: x = %d, y = %d", x, y);
//c
	printf("\nUCLN (%d , %d) la: %d", x, y, UCLN(x, y));
//d 
	printf("\nBCNN (%d , %d) la: %d", x, y, BCNN(x, y));
//e la in ra dc a,b,c,d
}

