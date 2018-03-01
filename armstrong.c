#include <stdio.h>

int main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    d=a;
    while(a!=0)
    {
        b=(a%10);
        c=c+(b*b*b);
        a=a/10;
    }
        if(d==c)
        printf("armstrong number");
        else
        printf("not");
    }

