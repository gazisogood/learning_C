#include <stdio.h>
#include <stdbool.h>

void print_array(int A[], int N)
{
	for(int i = 0; i < N; ++i)
		printf("%3d ", A[i]);
	printf("\n");
}

int main ()
{
	int counters[10] = {0};		// инициализация массива счетчиков до 10
	int x;

	while(true)
	{
		scanf("%d", &x);				// считываем вводимые числа
		if (x == 10) break;				// терминатор
		if (x < 0 || x > 9) continue;	// если число меньше 0 или больше 9, скипаем
		counters[x] += 1;				// увеличиваем на 1 соответсвующий счетчик массива
	}

	for(x = 0; x < 10; ++x)						// проходим циклом по индексам массива счетчиков
		for(int i = 0; i < counters[x]; ++i)	// повторение итераций до достижения цифры в каждом индексе массива счетчиков
			printf("%3d ", x);					// распечатка индекса массива

	return 0;
}
