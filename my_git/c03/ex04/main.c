#include <stdio.h>
#include <string.h>

// char	*ft_strstr(char *str, char *to_find);
// int main () {
//    char haystack[23] = "Tutortioials4ointHello";
//    char needle[10] = "tio";
//    char *ret;

//    char haystack2[23] = "Tutortioials4ointHello";
//    char needle2[10] = "tio";
//    char *ret2;

//    ret = strstr(haystack, needle);
//    printf("The substring is: %s\n", ret);

//    ret2 = ft_strstr(haystack2, needle2);
//    printf("The substring is: %s\n", ret);

//    printf("Match %d\n", (ret == ret2));
//    return(0);
// }
 

// // #include<stdio.h>
// // char	*ft_strstr(char *str, char *to_find);

// // int	main(void)
// // {
// // 	//unsigned int numb = 10;
// // 	// char s1[] = {"append essa coisa essa  "};
// // 	// char s2[] = {"essa"};
// // 	char *temp ;
// // 	temp = ft_strstr("testando string", "string");
// // 	printf("> %s <= retorno\n", temp);
// // }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *str;
	char *to_find;
	char *buff;
	char *ft_buff;

	str = strcpy(calloc(11, sizeof(char)), "alo galera fdgd");
	to_find = strcpy(calloc(7, sizeof(char)), "galera");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(1, sizeof(char)), "");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff); 
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	return (0);
}