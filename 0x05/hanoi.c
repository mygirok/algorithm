#include <stdio.h>
void move(int no, int x, int y)
{
	if(no > 1)
		move(no - 1, x, 6 - x - y);
	printf("disk[%d] move from Tower %d to Tower %d \n", no, x, y);

	if(no > 1)
		move(no - 1, 6 -x - y, y);
}

int main(void)
{
	int n;
	printf("Disks : ");
	scanf("%d", &n);
	move(n, 1, 3);

	return 0;
}
