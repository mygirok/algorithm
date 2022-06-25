#include <stdio.h>
#include "IntSTack.h"

int main(void)
{
	IntStack s;
	if(Initialize(&s, 64) == -1)
	{
		puts("fail");
		return 1;
	}

	while(1)
	{
		int menu, x;
		printf("Number of data : %d / %d\n", Size(&s), Capacity(&s));
		printf("(1)Push (2)Pop (3)Peek (4)Print (0)Exit : ");
		scanf("%d", &menu);

		if(menu == 0) break;
		switch(menu)
		{
			case 1 :
				printf("data : ");
				scanf("%d", &x);
				if(Push(&s, x) == -1)
					puts("\aerror : Push fail");
				break;

			case 2 :
				if(Pop(&s, &x) == -1)
					puts("\aerror : Pop fail");
				else
					printf("Pop data is %d\n", x);
				break;

			case 3 :
				if(Peek(&s, &x) == -1)
					puts("\aerror : Peek fail");
				else
					printf("Peek data is %d\n", x);
				break;

			case 4 :
				Print(&s);
				break;
		}
	}

	Terminate(&s);
	return 0;
}
