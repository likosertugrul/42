#include <unistd.h>
#include <stdio.h>

char *ft_strlowercase(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}


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

char *ft_capitalize(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        if (i == 0)
        {
            ft_struppercase(&str[0]);
        }
        else if (str[i] == ' ')
        {
            ft_struppercase(&str[i + 1]);
        }
        else if (str[1] >=65 && str[1] <= 90)
        {
            ft_strlowercase(&str[1]);
        }
        else if (str[i] != ' ')
        {
            ft_strlowercase(&str[i + 1]);
        }
        i++;
    }
    return str;
}

int main(void)
{
    char name[] = "ADF ASDF ASDF";

    printf("%s \n", name);
    printf("%s", ft_capitalize(name));
}