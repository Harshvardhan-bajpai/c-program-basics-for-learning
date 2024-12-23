#include<stdio.h>

int main(){
    int a,b,c;
    printf ("enter the value of a=");
    scanf ("%d",&a);
    printf ("enter the value of b=");
    scanf ("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("swapped values are a=%d b=%d",a,b);
    return 0;
}




#include<stdio.h>

int main(){
    int a,b;
    printf ("enter the value of a=");
    scanf ("%d",&a);
    printf ("enter the value of b=");
    scanf ("%d",&b);
    a=a+b;
    printf("swapped values are a=%d b=%d",a,b);
    return 0;
}