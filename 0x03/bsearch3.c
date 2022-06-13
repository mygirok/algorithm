#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[10]; 	
	int height;
	int weight;
} Person;

int npcmp(const Person *x, const Person *y)
{
	return strcmp(x->name, y->name);
}

int main(void)
{
	Person x[] = {
		{ "Aiden", 172, 63 },
		{ "Ian", 179, 79 },
		{ "Jack", 172, 84 },
		{ "Jen", 165, 51 },
		{ "Joy", 176, 52 },
		{ "Lily", 181, 73 },
	};

	int nx = sizeof(x) / sizeof(x[0]);
	int retry;
	puts("Search name");
	do
	{
		Person temp, *p;
		printf("Name : ");
		scanf("%s", temp.name);
		p = bsearch(&temp, x, nx, sizeof(Person),
				(int(*)(const void *, const void *)) npcmp);
		if(p == NULL)
			puts("fail");
		else
		{
			puts("success");
			printf("x[%d] : %s %dcm %dkg\n",
				(int)(p - x), p->name, p->height, p->weight);
		}
		printf("Search more?(Yes : 1, No : 0) : ");
		scanf("%d", &retry);
	} while(retry == 1);

	return 0;
}
