#include <stdio.h>

#define ROWS 3
#define COLS 3

void input (int arr[][COLS], int rows, int cols);
void display (int arr[][COLS], int rows, int cols);

int main()
{
	int arr[ROWS][COLS];	
	input(arr, ROWS, COLS);
	display(arr, ROWS, COLS);
	return 0;
}

void input (int arr[][COLS], int rows, int cols)
{
	int i, j;
	printf("Input elements in the matrix:\n");
	for (i=0; i<rows; i++)
	{
		for (j=0; j<cols; j++)
		{
			printf("element - [%d][%d]: ", i, j);
			scanf("%d", (*(arr+i)+j));
		}
	}
}

void display (int arr[][COLS], int rows, int cols)
{
	int i, j;
	printf("\nThe matrix is: \n");
	for (i=0; i<rows; i++)
	{
		for (j=0; j<cols; j++)
		{
			printf("%d   ", *(*(arr+i)+j));
		}
		printf("\n");
	}
}
