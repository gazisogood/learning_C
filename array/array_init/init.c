#include <stdio.h>

#define N 20

int main()
{
	int A[N] = {0};				// инициализация массива нулями

	for(int i = 0; i < N; ++i)	// инициализация массива индексами
		A[i] = i;

	for(int i = 0; i < N; ++i)
		printf(" %d ", A[i]);

	return 0;
}
