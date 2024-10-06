#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(void) {

	char	str[] = "Hello 42 World!";
	char	to_find1[] = "42";
	char	to_find2[] = "foo";
	char	to_find3[] = "";
		
	printf("str = '%s'\n", str);
	printf("to_find1 = '%s'\n\n", to_find1);
	printf("to_find2 = '%s'\n\n", to_find2);
	printf("to_find3 = '%s'\n\n", to_find3);

	printf("ft_strstr(str, to_find1) =  '%s'\n", ft_strstr(str, to_find1));
	printf("ft_strstr(str, to_find2) =  '%s'\n", ft_strstr(str, to_find2));
	printf("ft_strstr(str, to_find3) =  '%s'\n", ft_strstr(str, to_find3));
}
