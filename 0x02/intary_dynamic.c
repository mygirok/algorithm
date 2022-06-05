#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int *a;
	int na;
	printf(" Number of index : ");
	scanf("%d", &na);
	a = calloc(na, sizeof(int));

	if(a == NULL)
	{
		puts("fail");
	}
	else 
	{
		printf(" Enter int\n");
		for(i = 0; i < na; i++)
		{
			printf("a[%d] : ", i);
			scanf("%d", &a[i]);
		}
		printf(" values \n");
		for(i = 0; i < na; i++)
		{
			printf("a[%d] = %d\n", i, a[i]);
		}
		free(a);
	}

	return 0;
}
