#include <stdlib.h>
#include <stdio.h>

int		*find_cor(int n, int *cor)
{
	int	i;

	i = 0;
	while (n >= 4)
	{
		n = n - 4;
		i++;
	}
	if (i < 2)
	{
		cor[1] = n;
		if (i == 0)
			cor[0] = 0;
		else
			cor[0] = 3;
	}
	else
	{
		cor[0] = n;
		if (i == 3)
			cor[1] = 3;
		else
			cor[1] = 0;
	}
	return (cor);
}

int		main(void)
{
	int *cor;

	cor = find_cor(9);
	printf("%i, %i", cor[0], cor[1]);
}
