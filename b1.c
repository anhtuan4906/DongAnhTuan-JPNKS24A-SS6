#include<stdio.h>
int main(){

    int num1, num2, num3, num4, num5;
    int sum = 0;
    printf(" Nhap so nguyen thu nhat \n");
    scanf("%d",&num1);
    printf(" Nhap so nguyen thu hai \n");
    scanf("%d",&num2);
    printf(" Nhap so nguyen thu ba \n");
    scanf("%d",&num3);
    printf(" Nhap so nguyen thu tu \n");
    scanf("%d",&num4);
    printf(" Nhap so nguyen thu nam \n");
    scanf("%d",&num5);

    if(num1%2!=0){
        sum+=num1;
    }
    if(num2%2!=0){
        sum+=num2;
    }    
    if(num3%2!=0){
        sum+=num3;
    }
    if(num4%2!=0){
        sum+=num4;
    }
    if(num5%2!=0){
        sum+=num5;
    }  

    printf("Tong cac so le trong cac so da nhap la %d\n ", sum);             
    return 0;
}