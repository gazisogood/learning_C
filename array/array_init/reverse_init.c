#include <stdio.h>

#define N 6

int main()
{
	int A[N] = {0};				// инициализация массива нулями

	for(int i = 0; i < N; ++i)	// инициализация массива индексами в обратную сторону
		A[i] = N - i - 1;		// изначально i==0, для этого дополнительно -1
	  //A[N - i - 1] = i;          заполнение массива с конца
	for(int i = 0; i < N; ++i)
		printf(" %d ", A[i]);

	return 0;
}