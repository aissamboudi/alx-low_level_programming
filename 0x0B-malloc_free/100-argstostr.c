#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the number of args
 * @av: array of args
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *argstr;
	int idx1, idx2, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (idx1 = 0; idx1 < ac; idx1++)
	{
		for (idx2 = 0; av[idx1][idx2] != '\0'; idx2++)
			len++;
	}
	len += ac + 1;
	argstr = malloc(sizeof(char) * len);
	if (!argstr)
		return (NULL);
	len = 0;
	for (idx1 = 0; idx1 < ac; idx1++)
	{
		for (idx2 = 0; av[idx1][idx2] != '\0'; idx2++)
		{
			argstr[len] = av[idx1][idx2];
			len++;
		}
		argstr[len] = '\n';
		len++;
	}
	return (argstr);

}
