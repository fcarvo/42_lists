char	check_base(int i)
{
	char	n;
	char	l;
	int		t;

	n = '0';
	l = 'a';
	t = 0;
	while (n <= '9')
	{
		if (t == i)
			return (n);
		n++;
		t++;
	}
	if (i > 9)
	{
		while (l <= 'f')
		{
			if (t == i)
				return (l);
			l++;
			t++;
		}
	}
	return ('0');
}

void	convert_to(int input, int cout)
{
	int		res;
	char	hex[0];

	res = 0;
	write(1, "\\", 1);
	while (input != 0)
	{
		res = input % 16;
		input /= 16;
		hex[cout] = check_base(res);
		cout++;
	}
	cout--;
	if (cout < 1)
	{
		write(1, "0", 1);
	}
	while (cout >= 0)
	{
		write(1, &hex[cout], 1);
		cout--;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	c;
	int	non_p;

	non_p = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 0 && str[c] < 32)
		{
			convert_to(str[c], 0);
		}
		else
		{
			write(1, &str[c], 1);
		}
		c++;
	}
}
