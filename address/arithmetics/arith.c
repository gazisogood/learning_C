#include <stdio.h>

int main()
{
	int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%d\n", *A);

	int *p = A + 5;				// создаем указатель Р на элемент А+5 массива А
	printf("%d\n", p[-1]);		// обращаемся к -1 элементу от А+5, через указатель р

	int *q = A + 7;				// создаем указатель Q на элемент А+7 массива А
	printf("%d\n", q[0]);

	if (p > q)					// сравниваем указатели P и Q
		printf("p > q\n");
	else
		printf("p < q\n");

	printf("p - q = %d\n", p-q); // вычитаем указатели, можно узнать количество эл. между указ.

	return 0;
}
