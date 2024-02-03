#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        if (!(str[i] >= 32 && str[i] < 126))
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    char name[] = "ertgrfds";
    char surname[] = "lksadjflksaA\n \tSDA.23";

    printf("%s, %s \n", name, surname);
    printf("%d, %d", ft_str_is_printable(name), ft_str_is_printable(surname));
}