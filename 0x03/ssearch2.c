#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key)
{
	int i;
	for(i = 0; i < n; i++)
		if(a[i] == key)
			return i;
	return -1;
}

int main(void)
{
	int i, nx, ky, idx;
	int *x;
	puts("Linear Search");
	printf("Number of index : ");
	scanf("%d", &nx);
	x = calloc(nx, sizeof(int));
	for(i = 0; i < nx; i++)
	{
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}
	printf("Search Value : ");
	scanf("%d", &ky);
	idx = search(x, nx, ky);
	if(idx == -1)
		puts("error");
	else
		printf("%d is in x[%d] \n", ky, idx);
	free(x);

	return 0;
}
