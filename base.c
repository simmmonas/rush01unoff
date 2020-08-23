
void	place_four(int **grid, int place, int clue);
void	if_four(int **grid, int input);
int		*find_cor(int n, int *cor);

void	check_rules(int **grid, int *input)
{
	int i;
	int cor[2];

	i = 0;
	while (i < 16)
	{
		if (input[i] == 1)
		{
			find_cor(i, &cor[0]);
			grid[cor[0]][cor[1]] = 4;
		}
		else if (input[i] == 4)
		{
			if_four(&grid[0], i);
		}
		else if (input[i] + input[i + 4] == 5 && i < 4)
		{
			place_four(&grid[0], i, input[i]);
		}
		else if (input[i] + input[i + 4] == 5 && i < 12 && i > 7)
		{
			place_four(&grid[0], i, input[i]);
		}
	}
}

void	if_four(int **grid, int input)
{
	int cor[2];

	find_cor(input, &cor[0]);
	if (input < 4)
	{
		grid[0][cor[1]] = 1;
		grid[1][cor[1]] = 2;
		grid[2][cor[1]] = 3;
		grid[3][cor[1]] = 4;
	}
	else if (input < 8)
	{
		grid[0][cor[1]] = 4;
		grid[1][cor[1]] = 3;
		grid[2][cor[1]] = 2;
		grid[3][cor[1]] = 1;
	}
	else if (input < 12)
	{
		grid[cor[0]][0] = 1;
		grid[cor[0]][1] = 2;
		grid[cor[0]][2] = 3;
		grid[cor[0]][3] = 4;
	}
	else
	{
		grid[cor[0]][0] = 4;
		grid[cor[0]][1] = 3;
		grid[cor[0]][2] = 2;
		grid[cor[0]][3] = 1;
	}
}

void	place_four(int **grid, int place, int clue)
{
	if (clue == 3)
	{
		if (place < 4)
		{
			grid[2][place] = 4;
		}
		else
		{
			grid[place - 8][2] = 4;
		}
	}
	else
	{
		if (place < 4)
		{
			grid[1][place] = 4;
		}
		else
		{
			grid[place - 8][1] = 4;
		}
	}
}

int		main(void)
{
	return (0);
}
