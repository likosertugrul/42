#include <unistd.h>
#include <stdio.h>

int ft_str_is_upppercase(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        if (!(str[i] >= 65 && str[i] <= 90))
        {
            return 0;
        }
        i++;
    }
    return 1;
}


int main(void)
{
    char name[] = "KJJKHJK";
    char surname[] = "safLKJKLsa";

    printf("%s, %s \n", name, surname);
    printf("%d, %d", ft_str_is_upppercase(name), ft_str_is_upppercase(surname));
}