#include <stdio.h>

int main() {
    float tuoi;
    printf("Nhap vao tuoi cua ban: "); 
    scanf("%f", &tuoi);
    
    
	if (tuoi>=18)
    	printf("Du tuoi hoc lai xe");
    else
    	printf("chua du tuoi hoc lai xe");
    return 0;
}

