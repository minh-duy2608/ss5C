#include <stdio.h>

int main(){
    int a = 5;  
    int i;
    printf("Nhap vao mot so %d):\n", a);

    do {
        printf("Nhap so: ");
        scanf("%d", &i);
		 if (i != a) {
            printf("So ban nhap khong dung\n");
        }

    } while (i != a);

    printf("Chuc mung! Ban da nhap dung\n", a);

    return 0;
}
