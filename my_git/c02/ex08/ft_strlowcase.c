char	*ft_strlowcase(char *str)
{
	int		c;
	char	chac;

	c = 0;
	chac = '0';
	while (str[c] != '\0')
	{
		if ((int)str[c] > 64 && (int)str[c] < 91)
		{
			chac = (int)str[c] + 32;
			str[c] = chac;
		}
		c++;
	}
	return (str);
}
