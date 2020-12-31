#include <stdio.h>

int checkPrime(int);

int main()
{
	int x, flag;
	printf("Enter a number: ");
	scanf("%d", &x);
	flag = checkPrime(x);
	if (flag==1)
		printf("%d is a prime number!", x);
	else
		printf("%d is not a prime number!", x);
	return 0;
}

int checkPrime(int x)
{
	int i=x/2;
	if (i==1)
	{
		return 1;
	}
	else if (x%i==0)
	{
		return 0;
	}
	else
	{
		i--;
		checkPrime(x);
	}
	
}
