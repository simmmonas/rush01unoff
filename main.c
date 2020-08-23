#include <stdio.h>
#include <unistd.h>

int		*conv_input(int arc, char *raw);

int		main(int arc, char **raw_input)
{
	int		*input;

	input = conv_input(arc, &raw_input[1][0]);
	if (input[0] == 5)
	{
		write(1, "Error", 5);
		return (0);
	}
	printf("%i", input[0]);
}
