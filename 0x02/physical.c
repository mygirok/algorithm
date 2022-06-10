#include <stdio.h>
#define VMAX 21

typedef struct PhysCheck
{
	char	name[20];
	int		height;
	double	vision;
} PhysCheck;

double ave_height(const PhysCheck dat[], int n)
{
	int i;
	double sum = 0;
	for(i = 0; i < n; i++)
		sum += dat[i].height;
	return sum /n;
}

void dist_vision(const PhysCheck dat[], int n, int dist[])
{
	int i;
	for(i = 0; i < VMAX; i++)
		dist[i] = 0;
	for(i = 0; i < n; i++)
		if(dat[i].vision >= 0.0 && dat[i].vision <= VMAX/10.0)
			dist[(int)(dat[i].vision * 10)]++;
}

int main(void)
{
	int i;
	PhysCheck x[] = {
		{"Ian", 162, 0.3},
		{"Kim", 173, 0.7},
		{"John", 175, 2.0},
		{"Jen", 171, 1.5},
		{"Aiden", 168, 0.4},
		{"Joy", 174, 1.2},
		{"Lee", 169, 0.8},
	};
	int nx = sizeof(x) / sizeof(x[0]);
	int vdist[VMAX];
	puts(" === Phys Check === ");
	puts("Name		Height	Vision ");
	puts("----------------------------------");
	for(i = 0; i < nx; i++)
		printf("%-18.18s%4d%5.1f\n", x[i].name, x[i].height, x[i].vision);
	printf("\n Ave Height : %5.1f cm\n", ave_height(x, nx));
	dist_vision(x, nx, vdist);
	printf("\n Distribution of vision \n");
	for(i = 0; i < VMAX; i++)
		printf("%3.1f ~ : %2d people\n", i / 10.0, vdist[i]);

	return 0;
}
