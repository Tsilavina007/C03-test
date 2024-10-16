unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
#include <stdio.h>
int main() {
    char dest[20] = "Hello";
    char src[] = "Hellw";
    
    printf("%d\n", ft_strlcat(dest, src, 3));
    printf("%s", dest);
    return 0;
}
