#include <stdio.h>
int main()
{
	char A;
	while(1)
	{
		A = getchar();
		if (A == EOF)
			break;
		putchar(A);
	}
}