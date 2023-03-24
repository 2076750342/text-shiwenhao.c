#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=(a%6==0);
    c=(a%2==0)||(a%3==0);
    d=(a%2==0)&&(a%3!=0)||(a%2!=0)&&(a%3==0);
    printf("%d divisible by 2 and 3?%d\n",a,b);
    printf("%d divisible by 2 or 3?%d\n",a,c);
    printf("%d divisible by 2 and 3,but not both?%d\n",a,d);
    return 0;
}
