#include <stdio.h>

int main()
{
	int i, j;
	char k[30] = "01";
	for (i=1; i<=6; i++)
	{
		for (j=0; j<i; j++)
		{
			printf("%s", k);
		}
		printf("\n");
	}
}
