#include <unistd.h>
#include <stdio.h>

char *ft_struppercase(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        if (str[i] <= 122 && str[i] >= 97)
        {
            str[i] = str[i] - 32;
        }
            i++;
    }
    return str;
}


int main(void)
{
    char name[] = "maRVin";
    printf("%s \n", name);
    ft_struppercase(name);
    printf("%s", name);
}