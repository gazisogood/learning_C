#include <stdio.h>

void matryoshka(int n);

int main()
{
	matryoshka(7);

	return 0;
}

void matryoshka(int n)
{
	if (n == 1)
		printf(" Last Matryoshka!!! %d\n", n);
	else
	{
		printf("  Top of Matryoshka  %d\n", n);
		matryoshka(n - 1);
		printf("  Bottom of Matryoshka %d\n", n);
	} 
}
