#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row = 0, col = 0;
	scanf("%d", &row);
	scanf("%d", &col);

	int** matrix = (int**)malloc(sizeof(int*) * row);

	for (int i = 0; i < row; i++)
	{
		matrix[i] = (int*)malloc(sizeof(int) * col);
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	int sum = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i > j)
			{
				sum += matrix[i][j];
			}
		}
	}

	for(int i=0;i<row;i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	
	printf("%d", sum);
}
