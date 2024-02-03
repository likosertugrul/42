#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z' )))
        {
            return 0;
        }
        i++;
    }
    return 1;
}


int main(void)
{
    char name[] = "ertugrul12";
    char surname[] = "lik,.os";

    printf("%s, %s", name, surname);

    printf("%d, %d", ft_str_is_alpha(name), ft_str_is_alpha(surname));
}