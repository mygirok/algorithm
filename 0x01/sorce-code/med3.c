#include <stdio.h>

int med3(int a, int b, int c)
{
	if(a >= b)
		if(b >= c)
			return b;
		else if(a <= c)
			return a;
		else 
			return c;
	else if(a > c)
		return a;
	else if(b > c)
		return c;
	else
		return b;
}

int main(void)
{
	int a, b, c;

	printf(" Find the median \n");
	printf("a value : "); scanf("%d", &a);
	printf("b vlaue : "); scanf("%d", &b);
	printf("c value : "); scanf("%d", &c);

	printf("The median : %d \n", med3(a, b, c));

	return 0;
}
