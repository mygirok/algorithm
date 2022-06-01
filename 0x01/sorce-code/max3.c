#include <stdio.h>

int main(void)
{	
	int a, b, c;
	int max;

	printf("Get maximum value. \n");

	printf("a value : ");
	scanf("%d", &a);

	printf("b value : ");
	scanf("%d", &b);

	printf("c value : ");
	scanf("%d", &c);
	
	max = a;
	if(b > max) max = b;
	if(c > max) max = c;

	printf("maximum value is %d. \n", max);

	return 0;
}
