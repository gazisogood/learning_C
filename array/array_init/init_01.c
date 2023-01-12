#include <stdio.h>

#define N 6

int main()
{
	int A[N] = {0};				// инициализация массива нулями

	for(int i = 0; i < N; ++i)
		A[i] = i % 2;		// остаток от деления на 2

	for(int i = 0; i < N; ++i)
		printf(" %d ", A[i]);

	return 0;
}
