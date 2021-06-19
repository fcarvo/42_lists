#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[9] = {1,4,9,8,2,7,21,44,32};
	int c = 0;
	ft_sort_int_tab(tab, 9);
	while (c < 9)
	{
		printf("%d, ",tab[c]);
		c++;
	}
	return (0);
}