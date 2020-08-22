int		main(int arc, char **raw_input)
{
	int i;
	int input[16];
	if (arc != 2)
	{
		write(1, "Error", 5);
		return ;
	}
	while (i < 16)
	{
		if (raw_input[1][i * 2] > '0' && raw_input[1][i * 2] < '5')
			input[i] = raw_input[1][i * 2] - '0';
		else
		{
			write(1, "Error", 5);
			return ;
		}
	}
}
