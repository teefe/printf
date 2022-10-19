#include "main.h"

/**
*get_flags - find active flags
*@format: strings to be formatted
*@i: takes a parameter.
*Return: the flags:
*/
int get_flags(const char *format, int *i)
{
	int m, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
	for (m = 0; FLAGS_CH[m] != '\0'; ++m)
	if (format[curr_i] == FLAGS_CH[m])
	{
	flags |= FLAGS_ARR[m];
	break;
	}

	if (FLAGS_CH[m] == 0)
	break;
	}

	*i = curr_i - 1;

	return (flags);
}
