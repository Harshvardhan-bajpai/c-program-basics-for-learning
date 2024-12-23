#include<stdio.h>

int main(){
    int a,b,add,subs,multi;
    float divi;
    printf ("input a and b \n");
    scanf ("%d%d",&a,&b);
    add=a+b;
    subs=a-b;
    multi=a*b;
    divi = (float)a/b;
    printf("\naddition is   %d \n",add);
    printf("substraction is   %d \n",subs);
    printf("multiplication is   %d \n",multi);
    printf("division is   %f",divi);
    return 0;
}