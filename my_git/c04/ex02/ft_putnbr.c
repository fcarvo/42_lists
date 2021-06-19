#include <unistd.h>
void	ft_putnbr(int nb)
{
	unsigned int	nbr;
	char			chr;

	if (nb < 0)
	{
		write(1, "-", 1);
		nbr = nb * -1;
	}
	else
	{
		nbr = nb;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	chr = nbr % 10 + 48;
	write(1, &chr, 1);
}
