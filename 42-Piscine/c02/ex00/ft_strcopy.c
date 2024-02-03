#include <unistd.h>
#include <stdio.h>

char *ft_strcopy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void)
{
    char name[] = "ertugrul";
    char surname[] = "likos";

    printf("%s, %s \n", name, surname);
    ft_strcopy(name, surname);
    printf("%s, %s", name, surname);
}