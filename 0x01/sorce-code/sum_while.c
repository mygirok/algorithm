#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;
	puts(" Sum 1 to n. ");
	printf("n value : ");
	scanf("%d", &n);
	sum = 0;
	i = 1;
	while(i <= n) {
		sum += i;
		i++;
	}
	printf("sum 1 to %d : %d. \n", n, sum);

	return 0;
}
