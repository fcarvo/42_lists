int	ft_str_is_lowercase(char *str)
{
	int	c;
	int	rst;
	int	intc;

	c = 0;
	rst = 1;
	intc = 0;
	while (str[c] != '\0')
	{
		intc = (int)str[c];
		if (intc > 96 && intc < 123)
		{
			rst = 1;
		}
		else
		{
			rst = 0;
			return (rst);
		}
		c++;
	}
	return (rst);
}
