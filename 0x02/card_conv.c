#include <stdio.h>

int card_convr(unsigned x, int n, char d[])
{
	char dchar[] = "01234569ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;

	if(x == 0)
		d[digits++] = dchar[0];
	else
		while(x)
		{
			d[digits++] = dchar[x % n];
			x /= n;
		}
	return digits;
}

int main(void)
{
	int i;
	unsigned no;
	int cd;
	int dno;

	char cno[512];
	int retry;
	puts("Converts a decimal number to a radix.");
	
	do 
	{
		printf("integer to convert : ");
		scanf("%u", &no);
		do
		{
			printf("Enter (2 - 36) : ");
			scanf("%d", &cd); 
		} while(cd < 2 || cd > 36);
		dno = card_convr(no, cd ,cno);
		for(i = dno - 1; i >= 0; i--)
			printf("%c", cno[i]);
		printf("\n");
		printf(" One more ? (yes : 1, N : 0) : ");
		scanf("%d", &retry);
	} while(retry == 1);
	
	return 0;
}
