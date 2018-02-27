
#include <stdio.h>

int main()
{
int a,b,c,d;
printf("Enter the intervals");
scanf("%d %d",&a,&b);
while(a<b)
{
    d=0;
for(c=2;c<=a/2;++c)

{
if(a%c==0)
{
    d=1;
    break;
    }
}
if(d==0)
printf("\n%d",a);
++a;
   }
return 0;
}


