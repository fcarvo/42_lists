void	ft_swap(int *a, int *b)
{
	int	temp_store;

	temp_store = *a;
	*a = *b;
	*b = temp_store;
}