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


int main(void)
{
    char name[] = "KJHGKasdfasKASDKJ";
    printf("%s \n", name);
    printf("%s", ft_strlowercase(name));
}