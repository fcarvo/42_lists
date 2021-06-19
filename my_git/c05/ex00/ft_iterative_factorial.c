int	ft_iterative_factorial(int nb)
{
	int	rst;

	rst = 0;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	rst = nb;
	nb --;
	while (nb > 0)
	{
		rst = rst * nb;
		nb--;
	}
	return (rst);
}
