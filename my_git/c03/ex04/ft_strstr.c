#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find)
{
    unsigned int pos;
    unsigned int i;
	int zero_match;

	zero_match = 1;
    if (!to_find)
        return (str);
    pos = 0;
    while (str[pos] != '\0')
    {
        if (str[pos] == to_find[0])
        {
            i = 1;
			zero_match = 0;
            while (to_find[i] != '\0' && str[pos + i] == to_find[i])
                ++i;
            if (to_find[i] == '\0')
                return (&str[pos]);
        }
        ++pos;
    }
    if (zero_match == 1)
		return(str);
	return (0);

}

