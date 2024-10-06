#include <stdio.h>

char *ft_strcat(char *dest, char *src);
 
int main(void) {

	char src[] = " 42 World";
	char dest[20] = "Hello";

	printf("dest = '%s'\n", dest);
	printf("src = '%s'\n", src);

	printf("ft_strcat(dest, src) =  '%s'\n", ft_strcat(dest, src));
}
