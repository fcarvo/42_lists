unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;

	c = 0;
	while (src[c] != '\0' && c < size - 1)
	{
		dest[c] = src[c];
		c++;
	}
	c++;
	dest[c] = '\0';
	return (c);
}
