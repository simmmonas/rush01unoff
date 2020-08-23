#include <stdlib.h>

int		*conv_input(int arc, char *raw)
{
	int		*input;
	int		i;

	input = malloc(16 * 4);
	i = 0;
	if (arc != 2)
	{
		input[0] = 5;
		return (input);
	}
	while (i < 16)
	{
		if (raw[i * 2] > '0' && raw[i * 2] < '5')
		{
			input[i] = raw[i * 2] - '0';
			i++;
		}
		else
		{
			input[0] = 5;
			return (&input[0]);
		}
	}
	return (&input[0]);
}
