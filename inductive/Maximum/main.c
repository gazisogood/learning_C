#include <stdio.h>
#include <stdbool.h>

int main()
{
	int x;
	scanf("%d", &x);
	int m = x;
	while(x != 0)
	{
		m = x > m? x: m;
		scanf("%d", &x);
    }
    printf("maximum = %d\n", m);

    return 0;
}
