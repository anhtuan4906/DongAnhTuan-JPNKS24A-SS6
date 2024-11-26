#include<stdio.h>
int main(){

    int passWord= 24102006;
    int i;
    printf(" Hay nhap mat khau\n");
    scanf("%d",&i);
    if(i == passWord){
        printf(" Ban da nhap dung\n");
    } else {
        printf(" Ban da nhap sai\n");
    }

    return 0;
}
