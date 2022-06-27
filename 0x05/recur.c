#include <stdio.h>

void recur(int n)
{
	if(n > 0)
	{
		recur(n - 1);
		printf("%d\n", n);
		recur(n - 2);
	}
}

int main(void)
{
	int x;
	printf(" enter : ");
	scanf("%d", &x);
	recur(x);

	return 0;
}

