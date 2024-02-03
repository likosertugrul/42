#include <stdio.h>
#include <unistd.h>

void ft_ft(int *nbr)
{

    *nbr = 42;
}

int main(void)
{
    int num;
    int sayi = 5;
    ft_ft(&num);
    printf("%d \n" , num);
}
