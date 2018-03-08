#include<stdio.h>
void main()
{
    int a,b,c,d,e=0,f=0,g,h;
    scanf("%d %d",&a,&b);
    for(c=a+1;c<a;c++)
    {
        d=a;
        {
            while(d!=0)
            {
              d=d/10;
              ++e;
            }
            while(d!=0)
            {
          g=d%10;
          f=f+pow(g,e);
          d=d/10;
        }
        if(f==i)
        printf("%d",h)
        f=0;
        e=10;
    }
}
