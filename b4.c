#include<stdio.h>
int main(){

    int a, b, c, delta;
    printf(" Nhap so a\n");
    scanf("%d",&a);
    printf(" Nhap so b\n");
    scanf("%d",&b);
    printf(" Nhap so c\n");
    scanf("%d",&c);
    delta= b*b - (4*a*c);
    if(delta < 0){
        printf("Phuong trinh vo nghiem\n");
    } else if (delta > 0){
        printf(" Phuong trinh co 2 nghiem phan biet");
    } else {
        printf("Phuong trinh co nghiem kep la %d\n", -b/(2*a));
    }

    return 0;
}