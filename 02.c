#include <stdio.h>
#include <stdlib.h>

#define MAX 4000000

int main(void)
{
	int a = 1, b = 2;
	int sum = 2;

	while (1)
	{
		a += b;
		if (a > MAX)
			break ;
		if (a % 2 == 0)
			sum += a;
		b += a;
		if (b > MAX)
			break ;
		if (b % 2 == 0)
			sum += b;
	}
	printf("%d\n", sum);
}
