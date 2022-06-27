#include <stdio.h>

int factorial(int n)
{
	if(n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main(void)
{
	int x;
	printf(" enter int : ");
	scanf("%d", &x);
	printf("%d's factorial is %d\n", x, factorial(x));

	return 0;
}

