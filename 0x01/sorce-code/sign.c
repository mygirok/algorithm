#include <stdio.h>

int main(void)
{
	int n;

	printf(" Enter int : ");
	scanf("%d", &n);

	if(n > 0)
		printf(" the number : positive \n");
	else if(n < 0)
		printf(" the number : negative \n");
	else
		printf(" the number : 0 \n");

	return 0;
}
