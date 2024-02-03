#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int temp;
    int i = 0;
    while (i != 0)
    {
        i++;
    }
    return i;
}

char *ft_rev_print(char *str)
{
    int temp;
    int i = 0;
    while (i < ft_strlen("ertugrul") / 2)
    {
        temp = str[i];
        str[i] = str[i + 1];
        str[i + 1] = temp;
        i++;
    }
    return str;
}

int main(void)
{
    int i = 0;
    char name[] = {"ertugrul"};

    while (name[i] != 0)
    {
        printf("%c", name[i]);
    }


}