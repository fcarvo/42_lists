void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	swap;

	swap = 0;
	count = 0;
	size = size - 1;
	while (count <size)
	{
		swap = tab[size];
		tab[size] = tab[count];
		tab[count] = swap;
		count++;
		size--;
	}
}
