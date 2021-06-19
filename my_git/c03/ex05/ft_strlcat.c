unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	dest_c;
	unsigned int	src_c;

	c = 0;
	dest_c = 0;
	src_c = 0;
	while (dest[dest_c] != '\0')
	{
		dest_c++;
	}
	c += dest_c;
	while (src[src_c] != '\0' && src_c < size)
	{
		dest[c] = src[src_c];
		c++;
		src_c++;
	}
	dest[c] = '\0';
	return (c);
}
