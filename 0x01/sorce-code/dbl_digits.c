#include <stdio.h>

int main(void)
{
	int no;
	printf(" Enter two-digit integer ");
	do {
		printf("No : ");
		scanf("%d", &no);
	} while(no < 10 || no > 90);
	printf(" variable : %d \n", no);

	return 0;
}
