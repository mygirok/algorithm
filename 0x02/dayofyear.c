#include <stdio.h>

int mdays[][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, 
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int dayofyear(int y, int m, int d)
{
	int i;
	int days = d;
	for(i = 1; i < m; i++)
		days += mdays[isleap(y)][i - 1];
	return days;
}

int main(void)
{
	int year, month, day;
	int retry;

	do
	{
		printf("Year : "); scanf("%d", &year);
		printf("Month : "); scanf("%d", &month);
		printf("Day : "); scanf("%d", &day);
		printf("%d day of %d year\n", dayofyear(year, month, day), year);
		printf("One more? ( Yes : 1, N : 0) : ");
		scanf("%d", &retry);
	}while(retry == 1);

	return 0;
}
