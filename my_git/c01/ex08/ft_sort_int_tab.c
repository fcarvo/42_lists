void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int counter;

	counter = 0;
	temp = 0;
	while(counter < size-1)
	{
		if (tab[counter] > tab[counter + 1])
		{
			temp = tab[counter + 1];
			tab[counter + 1] = tab[counter];
			tab[counter] = temp;
			counter = 0;
		}
		else
		{
			counter++;
		}
	}
}

