#include<stdio.h>

int main(){
    float a;
    printf("enter a number");
    scanf ("%f",&a);
    if ((int)a%2==0){
        printf("number is even\n");
    }else{
        printf("number is odd\n");
    }
    if (a==0){
        printf("your number is 0\n");
    }
    else {
        if (a>0){
            printf("number is positive\n");
        }else{ 
            printf("number is negative\n");
        }
    }
    if ((int)a%5==0 ,(int)a%7==0 ){
        printf("number is divisible by 5 and 7");
    }
    return 0;
}