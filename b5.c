#include<stdio.h>
int main(){

    int year, month;
    printf(" Nhap thang\n");
    scanf("%d",&month);
    printf(" Nhap nam\n");
    scanf("%d",&year);

    switch (month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
    printf(" Co 31 ngay\n");
    break;
    case 4: case 6: case 9: case 11:
    printf(" Co 30 ngay\n");
    break;
    case 2:
    if((year%4==0 && year%100!=0) || year%400==0){
        printf(" Co 29 ngay\n");
    } else {
        printf(" Co 28 ngay\n");
    }
    break;
}

    return 0;
}