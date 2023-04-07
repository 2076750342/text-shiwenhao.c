#include<stdio.h>
int main()
{
	int sum = 0, n = 1, x;
	scanf_s("%d", &x);
	do
	{
		sum = sum + n;
		n = n + 1;
	} while (n <= x);
	printf("%d\n", sum);
	return 0;
}