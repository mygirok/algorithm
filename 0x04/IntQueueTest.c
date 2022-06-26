#include <stdio.h>
#include "IntQueue.h"

int main(void)
{
	IntQueue que;

	if(Initialize(&que, 64) == -1)
	{
		puts("fail");
		return 1;
	}

	while(1)
	{
		int m, x;

		printf("Number of data : %d / %d \n", Size(&que), Capacity(&que));
		printf("(1)enque (2)deque (3)peek (4)print (0)exit : ");
		scanf("%d", &m);

		if(m == 0) break;
		switch(m)
		{
			case 1 :
				printf("data : "); scanf("%d", &x);
				if(Enque(&que, x) == -1)
					puts("\aerror : fail");
				break;

			case 2 :
				if(Deque(&que, &x) == -1)
					puts("\aerror : fail");
				else
					printf("deque data is %d \n", x);
				break;

			case 3 :
				if(Peek(&que, &x) == -1)
					puts("\aerror : fail");
				else
					printf("peek data is %d \n", x);
				break;

			case 4 :
				Print(&que);
				break;
		}
	}
	Terminate(&que);
	return 0;
}
