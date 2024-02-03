#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] == s2[i] && s1[i] != 0 || s2[i] != 0)
    {
        i++; 
        return 1;       
    }
    // return (s1[i] - s2[i]);
    return 0;

}


int main (void)
{
    //char name1[] = "Marvin";
    //char name2[] = "Zaphood";

    //printf("%s, %s \n", name1, name2);
    printf("%d \n", ft_strcmp("name1", "zfdg"));
    printf("%d", ft_strcmp("zfdg", "zfdg"));

}
