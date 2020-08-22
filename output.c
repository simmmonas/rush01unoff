#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
	write(1, " ", 1);
}

void	print_output(int *arr)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (i % 4 == 0 && i != 0)
		{
			write(1, "\n", 1);
		}
		put_char(arr[i] + '0');
		i++;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	int  output[16] = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8};

	print_output(output);
	return (0);
}
