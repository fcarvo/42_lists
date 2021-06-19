void	ft_ultimate_ft(int **********nbr);

int	main (void)
{
	int	value;
	int	*pointer_a;
	int	**pointer_b;
	int	***pointer_c;
	int	****pointer_d;
	int	*****pointer_e;
	int	******pointer_f;
	int	*******pointer_g;
	int	********pointer_h;
	int	*********pointer_i;

	value = 42;
	pointer_a = &value;
	pointer_b = &pointer_a;
	pointer_c = &pointer_b;
	pointer_d = &pointer_c;
	pointer_e = &pointer_d;
	pointer_f = &pointer_e;
	pointer_g = &pointer_f;
	pointer_h = &pointer_g;
	pointer_i = &pointer_h;
	nbr = &pointer_i;
	ft_ultimate_ft(nbr);
	printf ("%d",**********nbr);
}