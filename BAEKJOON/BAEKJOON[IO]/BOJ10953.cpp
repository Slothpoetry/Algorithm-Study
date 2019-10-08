#include <stdio.h>
int main()
{
	int a, b, T;
	scanf("%d", &T);
	for(int i = 0; i <T ; i++)
	{
		scanf("%d,%d", &a, &b);
		if (a > 0 && b < 10)
			printf("%d \n", a + b);

	}
	return 0;
}