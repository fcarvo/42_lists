#include<stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

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
	ft_div_mod(d,c,a,b);
	printf("%d\n", *a);
	printf("%d\n", *b);
}