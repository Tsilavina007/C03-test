#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void) {

	char src[] = "42 World";
	char dest[20] = "Hello ";

	printf("dest = '%s'\n", dest);
	printf("src = '%s'\n\n", src);

	char dest2[20] = "Hello ";
	printf("ft_strncat(dest, src, 2) =  '%s'\n", ft_strncat(dest, src, 2));
	printf("ft_strncat(dest, src, 8) =  '%s'\n", ft_strncat(dest2, src, 8));
}
