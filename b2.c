    #include<stdio.h>
int main(){

    int num1, num2, num3, num4, num5;
    int slsc=0;
    int slsl=0;
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
        slsl++;
    }else{
        slsc++;
    }
    if(num2%2!=0){
        slsl++;
    } else {
        slsc++;
    }    
    if(num3%2!=0){
        slsl++;
    } else {
        slsc++;
    }
    if(num4%2!=0){
        slsl++;
    } else {
        slsc++;
    }
    if(num5%2!=0){
        slsl++;
    }  else {
        slsc++;
    }
    

    printf(" Co %d so chan va %d so le ", slsc, slsl);             
    return 0;
}