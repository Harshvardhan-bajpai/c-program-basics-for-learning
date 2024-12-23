#include<stdio.h>

int main(){
    int a,b,c,e,d,f,g;
    printf("enter number of apples sold");
    scanf("%d",&a);
    printf("enter number of oranges sold");
    scanf("%d",&b);
    f=12;
    g=7;
    c=a*f;
    d=b*g;
    e=c+d;
    printf("the selling price of apples is %d rs/piece \n",f);
    printf("the selling price of oranges is %d rs/piece\n",g);
    printf("the total profit gained is %d",e);
    return 0;
}