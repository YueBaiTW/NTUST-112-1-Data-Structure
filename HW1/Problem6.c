#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <string.h>

int main()
{
	char input[1000] = { 0 };
	char copy[1000] = { 0 };
	gets(input);
	int index = 0;
	for (int i = 0; i < (int)strlen(input); i++)
	{
		if (input[i] != ' ')
		{
			copy[index] = input[i];
			index++;
		}
	}

	char palindrome[1000] = { 0 };

	for (int i = 0; i < (int)strlen(copy); i++)
	{
		palindrome[i] = copy[index - i - 1];
	}

	strcat(copy, palindrome);

	printf("%s", copy);
}
