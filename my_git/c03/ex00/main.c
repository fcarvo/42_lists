// #include<stdio.h>
// #include<string.h>
// int	ft_strcmp(char *s1, char *s2);

// int main(void)
// {
// 	char s1[] = {"agt"};
// 	char s2[] = {"goias testando"};
// 	int resultado = 0;
	
// 	resultado = ft_strcmp(s1, s2);
// 	printf("%d minha\n", resultado);
// 	printf(" %d original\n", strcmp(s1, s2));

// 	resultado = ft_strcmp("segunda string de teste", "string de teste");
// 	printf("%d minha\n", resultado);
// 	printf(" %d original\n", strcmp("segunda string de teste", "string de teste"));

// 	resultado = ft_strcmp("string de teste", "string de teste");
// 	printf("%d minha\n", resultado);
// 	printf(" %d original\n", strcmp("string de teste", "string de teste"));
// }

// inicia igual = 5
// não tem nada igual = 3
// igual = 0
// 1 letra diferente ou contem uma string na outra = 13
// s1 menor que s2 ou s1 nula = retorna p valor do caractere que inicia a diferença na maior string
//si menor que s2 totalmente diferente
//contem caracteres da outra string

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char s5[] = {'a', 'b', 'c', -1, -20, '\0'};

	s1 = calloc(10, sizeof(char)); 
	s2 = calloc(8, sizeof(char)); 
	s3 = calloc(10, sizeof(char)); 
	s4 = calloc(10, sizeof(char)); 
	s1 = "abcdefghi";
	s2 = "abcdefg";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s\n", s1, s2, s3, s4, s5);
	printf("cmp_12 = %d, og_cmp_12 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("cmp_13 = %d, og_cmp_13 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("cmp_14 = %d, og_cmp_14 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("cmp_15 = %d, og_cmp_15 = %d\n", ft_strcmp(s1, s5), strcmp(s1, s5));
	return(0);
}