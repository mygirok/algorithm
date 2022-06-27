#include <stdio.h>

int gcd(int x, int y)
{
	if(y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int main(void)
{
	int x, y;
	puts(" get gcd ");
	printf(" enter : ");
	scanf("%d", &x);
	printf(" enter : ");
	scanf("%d", &y);
	printf("gcd is %d \n", gcd(x,y));

	return 0;
}

