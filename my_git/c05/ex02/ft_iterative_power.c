#include<stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	rst;
	int	c;

	rst = nb;
	c = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (c < power)
	{
		rst *= nb;
		c++;
	}
	return (rst);
}
