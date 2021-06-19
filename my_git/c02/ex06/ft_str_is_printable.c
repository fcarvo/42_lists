int	ft_str_is_printable(char *str)
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
		if (intc > 31 && intc < 127)
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
