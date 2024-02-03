#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        if (!(str[i]  >= 48 && str[i] <= 57))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main (void)
{
    char name[] = "987897";
    char surname[] = "76slikos";

    printf("%s, %s \n", name, surname);
    printf("%d, %d",ft_str_is_numeric(name), ft_str_is_numeric(surname));
}