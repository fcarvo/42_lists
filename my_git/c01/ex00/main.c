#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int *nbr;
	int teste = 10;

	nbr = &teste;
	ft_ft(nbr);
	printf("%d", *nbr);

}