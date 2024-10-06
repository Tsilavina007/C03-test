#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char str1[] = "Armstrong";
    char str2[] = "Army";
    int result;

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

    result = ft_strncmp(str1, str2, 3);
    printf("ft_strncmp(str1, str2, 3 = %d)\n", result);

	result = ft_strncmp(str1, str2, 4);
    printf("ft_strncmp(str1, str2, 4 = %d)\n", result);

	return (0);
}
