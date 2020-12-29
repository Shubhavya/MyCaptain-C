#include <stdio.h>

int sum (int x);

int main()
{
	int x, res;
	printf("Enter a number: ");
	scanf("%d", &x);
	res = sum(x);
	printf("The sum of digits of the number %d is: %d", x, res);
	return 0;
}

int sum (int x)
{
	if (x!=0)
	{
		return (x%10+sum(x/10));
	}
	
	else
	{
		return 0;
	}
}
