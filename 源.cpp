#include<stdio.h>
	int main()
{
	int m,k,x=0,n;
	scanf_s("%d %d", &m,&k);
	n = m;
	while (n> 0)
	  {
		if (n % 10 == 3)
			x++;
		    n=n/10;
	  }
	if (m%19==0&&k==x)
		printf("YES");
	else
		printf("NO");
	return 0;
}