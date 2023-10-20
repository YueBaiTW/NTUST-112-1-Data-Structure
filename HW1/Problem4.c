#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}


	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n;)
		{
			if (a[i] == a[j])
			{
				for (int k = j; k < n - 1; k++)
				{
					a[k] = a[k + 1];
				}
				n--;
			}
			else
			{
				j++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}
