#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while ((s1[i] == s2[i]) && (s1[i] != 0) && (s2[i] != 0) )
    {
        if (s1[i] == s2[i])
        {
        return 0;
        }
        i++;
    }
    return 1;
}



 int main(void)
 {
    printf("%d", ft_strcmp("asd", "asd"));
 }