#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: 'printing all arguments'
 * Parameters: int and a char input returns an int
 * @argc: number of arguments
 * @argv: array storing the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
