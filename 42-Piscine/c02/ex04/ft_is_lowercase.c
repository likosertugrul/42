#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        if (!(str[i] >= 97 && str[i] <= 122))
        {
            return 0;
        }
        i++;
    }
    return 1;
}


int main(void)
{
    char name [] = "ErtgurfgADFA";
    char surname[] = "likkos";

    printf("%s, %s \n", name, surname);
    printf("%d, %d", ft_str_is_lowercase(name), ft_str_is_lowercase(surname));
}