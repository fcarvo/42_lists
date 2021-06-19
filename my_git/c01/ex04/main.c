#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int d;
	int c;
	int *a;
	int *b;

	d = 5;
	c = 10;
	a = &d;
	b = &c;
	ft_ultimate_div_mod(a,b);
	printf("%d\n", *a);
	printf("%d\n", *b);

}