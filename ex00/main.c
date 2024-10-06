#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char str1[] = "abcd";
    char str2[] = "abcd";
	char str3[] = "abCd";
	int result;

	printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
	printf("str3 = %s\n", str3);

// comparing strings str1 and str2
  result = ft_strcmp(str1, str2);
  printf("ft_strcmp(str1, str2) = %d\n", result);

  // comparing strings str1 and str3
  result = ft_strcmp(str1, str3);
  printf("ft_strcmp(str1, str3) = %d\n", result);

// comparing strings str1 and str3
  result = ft_strcmp(str3, str1);
  printf("ft_strcmp(str3, str1) = %d\n", result);
}
