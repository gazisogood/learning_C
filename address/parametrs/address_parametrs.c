#include <stdio.h>
#include <stdlib.h>

void foo(int *p)
{
	printf("Got: *p = %d\n", *p);   // x = 7 (был)
	*p += 10;						// разыменовываем *Р и увеличиваем значение Х, на 10
	printf("Did: *p = %d\n", *p);	// x = 17 (становится)
}

int main ()
{
	int x = 7;
	printf("x = %d\n", x);		// старое значение х = 7
	foo(&x);					// передаем в функцию адрес указателя Х
	printf("x = %d\n", x);		// новое значение х = 17

	return 0;
}
