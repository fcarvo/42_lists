#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int		c;
	char	chac;

	c = 0;
	chac = '0';
	while (str[c] != '\0')
	{
		if ((int)str[c] > 64 && (int)str[c] < 91)
		{
			chac = (int)str[c] + 32;
			str[c] = chac;
		}
		c++;
	}
	return (str);
}

int	to_uper(int ch)
{
	ch -= 32;
	return (ch);
}

int	to_down(int ch)
{
	ch += 32;
	return (ch);
}

int	alp(int i)
{
	int	r;

	r = 0;
	if (i > 96 && i < 123)
	{
		r = 1;
	}
	else if (i > 64 && i < 91)
	{
		r = 2;
	}
	if (i > 47 && i < 58)
	{
		r = 3;
	}
	return (r);
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	ft_strlowcase(str);
	while (str[c] != '\0')
	{
		if (alp((int)str[c]) == 1)
		{
			if (alp((int)str[c - 1]) == 0 || c == 0)
			{
				if (alp((int)str[c + 1]) != 0 )
					str[c] = to_uper((int)str[c]);
				if (str[c + 1] == '-')
					str[c] = to_uper((int)str[c]);
			}
		}
		else if (alp((int)str[c]) == 2)
		{
			str[c] = to_down((int)str[c]);
		}
		c++;
	}
	return (str);
}
