#include<stdio.h>
int main(){

    int i;
    for(i=1; i<=100; i++){
        if(i%3==0 && i%5==0){
            printf("%d\tFizzBuzz\n",i);
        } else if (i%5==0){
            printf("%d\tBuzz\n",i);
        } else if (i%3==0){
            printf("%d\tFizz\n",i);
        } else {
            printf("%d\n",i);
        }
    }

    return 0;
}