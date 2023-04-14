#include "main.h"

#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer that represents memory block to fill
 * @b: characters to fill/set
 * @n: number of bytes to be filled
 *
 * Return: pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array using memset
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer to new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}


/**
 * multiply - initialize array with 0 byte
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
 */

void multiply(char *s1, char *s2)
{
	int i, v1, v2, ttv, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	v1 = _length(s1);
	v2 = _length(s2);
	tmp = v2;
	ttv = v1 + v2;
	ptr = _calloc(sizeof(int), ttv);

	/* store our pointer address to free later */
	temp = ptr;

	for (v1--; v1 >= 0; v1--)
	{
		f_digit = s1[v1] - '0';
		res = 0;
		v2 = tmp;
		for (v2--; v2 >= 0; v2--)
		{
			s_digit = s2[v2] - '0';
			res += ptr[v2 + v1 + 1] + (f_digit * s_digit);
			ptr[v1 + v2 + 1] = res % 10;
			res /= 10;
		}

		if (res)
			ptr[v1 + v2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		ttv--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}

/**
 * main - Entry point
 *
 * Description: a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 on success 98 on faliure
 */

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();

	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);

	return (0);
}
