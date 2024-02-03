#include <unistd.h>
#include <stdio.h>

char *ft_strncopy(char *dest, char *src, unsigned int n)
{
    int i = 0;
    while ((src[i] != 0) && (i < n))
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = 0;
        i++;
    }
    return dest;
}

int main(void)
{
    char name[] = "ertugrul";
    char surname[] = "likos";
    printf("%s, %s \n", name, surname);
    ft_strncopy(name, surname, 5);
    printf("%s, %s", name, surname);
}