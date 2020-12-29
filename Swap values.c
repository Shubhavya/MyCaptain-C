#include <stdio.h>

int main()
{
	int a, b;
	//We input the values of two numbers
	printf("Enter the value of a and b: ");
	scanf("%d", &a);
	scanf("%d", &b);
	//We must swap the values of a and b	
	//We are asked not to use a temporary variable
	printf("The values of a and b before swapping\n");
	printf("Value of a: %d \nValue of b: %d ", a, b);
	//Now, we use addition and subtraction to swap values
	a=a+b;
	b=a-b;
	a=a-b;
	//Now the values of a and b are swapped
	printf("\nThe values of a and b after swapping\n");
	printf("Value of a: %d \nValue of b: %d ", a, b);
	return 0;
}
