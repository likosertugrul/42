#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void outstr(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        write(1, &str[i], 1);
        str++;
    }
}

int main(void)
{
    //char *name = "ertugrul";
    outstr("ertugrul");
    return (0);
}