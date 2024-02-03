#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    while ((s1[i] != 0 || s2[i] == 0) && i < n)
    {
        if (s1[i] == s2[i])
        {
            return 0;
        }
        //else
        //{
            //return 1;
        //}
    }
    return 1;
}

int main(void)
{
    printf("%d\n", ft_strncmp("nameasd", "nameasd", 2));
    printf("%d\n", ft_strncmp("name", "nadsmdse", 4));
}