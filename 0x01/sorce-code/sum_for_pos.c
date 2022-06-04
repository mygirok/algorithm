#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;
	puts("Sum 1 to n");
	do {
		printf("n value : ");
		scanf("%d", &n);
	} while(n <= 0);
	sum = 0;
	for(i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("Sum 1 to %d : %d. \n", n, sum);

	return 0;
}
