#include <stdio.h>

double fast_power(double a, int n)
{
	if (n == 0) return 1;
	if (n%2 != 0)
		return a * fast_power(a, n-1);
	else
		return fast_power(a*a, n/2);
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	printf("power(%d, %d) = %f\n", n, m, fast_power(n, m));
	return 0;
}
