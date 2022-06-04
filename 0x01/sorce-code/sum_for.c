#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;
	puts(" Sum 1 to n ");
	printf("n value : ");
	scanf("%d", &n);
	sum = 0;
	for(i = 0; i <= n; i++)
	{
		sum += i;
	}
	printf(" Sum 1 to %d : %d. \n", n, sum);

	return 0;
}
