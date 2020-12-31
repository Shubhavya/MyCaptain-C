#include <stdio.h>

int lcm (int, int);

int main()
{
	int a, b, res;
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	res = lcm(a, b);
	printf("LCM of %d and %d is %d.", a, b, res);
	return 0;
}

int lcm(int a, int b)
{
	static int temp=1;
	
	if (temp%a==0 && temp%b==0)
	{
		return temp;
	}
	
	else
	{
		temp++;
		lcm (a, b);
		return temp;
	}
}
