int	ft_atoi(char *str)
{
	int	sign;
	int	rsut;

	sign = 1;
	rsut = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign = sign * -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		rsut = (*str - 48) + (rsut * 10);
		str++;
	}
	return (rsut * sign);
}
