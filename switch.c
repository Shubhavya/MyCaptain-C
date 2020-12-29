#include <stdio.h>

int main()
{
	int x;
	printf("Enter any number between 1 and 5: ");
	scanf("%d", &x);
	switch(x)
	{
		case 1: printf("Food item - Pasta\nPrice - Rs.179");
				break;
		case 2: printf("Food item - Pizza\nPrice - Rs.239");
				break;
		case 3: printf("Food item - Sandwich\nPrice - Rs.149");
				break;
		case 4: printf("Food item - French Fries\nPrice - Rs.99");
				break;
		case 5: printf("Food item - Burger\nPrice - Rs.129");
				break;
		default: printf("Sorry! No food for this number!!");
	}
}
