#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("ENTER 3 NUMBERS TO MULTIPLY:\n");
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%d",&c);
    d= a*b*c;
    printf("product is %d",d);
    return 0;
}
