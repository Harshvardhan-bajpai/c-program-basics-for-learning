#include<stdio.h>

int main(){
    float a,area,t;
    printf("enter the daimeter of university");
    scanf("%f",&a);
    a=a/2;
    t= a*a;
    area = 3.14*t;
    printf("area of university is %f",area);
    return 0;
}