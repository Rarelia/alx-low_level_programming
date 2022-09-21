#include "main"

/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded.
 *
 * Return: adress of s
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j]
		}
	}
	return (s);
}
