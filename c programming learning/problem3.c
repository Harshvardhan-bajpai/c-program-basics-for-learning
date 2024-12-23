#include<stdio.h>

int main(){
    int p,t;
    float r,i,a;
    printf ("enter the amount lent to friend");
    scanf ("%d",&p);
    printf ("enter the time for which u have lent");
    scanf ("%d",&t);
    printf ("the rate at which money is lent");
    scanf ("%f",&r);
    i=(p*r*t)/100;
    printf("the total interest gained is %f\n",i);
    a=i+p;
    printf("the total amount to be taken back after %d",t);
    printf(" years is %f",a);
    return 0;
}