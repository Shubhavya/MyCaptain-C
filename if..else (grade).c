#include <stdio.h>

int main()
{
	int marks;
	printf("Enter marks: ");
	scanf("%d", &marks);
	if (marks>=85 && marks<=100)
		printf("The kid's grade is A!");
	else if (marks>=70 && marks<85)
		printf("The kid's grade is B!");
	else if (marks>=55 && marks<70)
		printf("The kid's grade is C!");
	else if (marks>=40 && marks<55)
		printf("The kid's grade is D!");
	else if (marks<40)
		printf("The kid's grade is F!");
	else
		printf("Please enter valid mark.");
	return 0;
}
