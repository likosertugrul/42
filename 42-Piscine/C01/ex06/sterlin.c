#include <stdio.h>
#include <unistd.h>

int sterlin(char *str)
{
    int i = 0;
    while (str[i] != 0)
    {
        write(1, &str[i], 1);
        i++;
    }
    return i;
}

int main(void)
{


    printf("%d", sterlin("ertugrul"));
}