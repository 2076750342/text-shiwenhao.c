#include<stdio.h>
int main()
{
double a,b,i;
scanf("%lf",&a);
a>0;
if(a<=1600)
i=0;
else if(a<=2500)
i=0.05;
else if(a<=3500)
i=0.1;
else if(a<=4500)
i=0.15;
else
i=0.2;
b=i*(a-1600);
printf("%0.2lf\n",b);
return 0;
}
