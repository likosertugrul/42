#include <stdio.h>

void ft_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int num = 3;

    int *nbr8 = &num;
    int **nbr7 = &nbr8;
    int ***nbr6 = &nbr7;
    int ****nbr5 = &nbr6;
    int *****nbr4 = &nbr5;
    int ******nbr3 = &nbr4;
    int *******nbr2 = &nbr3;
    int ********nbr1 = &nbr2;
    int *********nbr = &nbr1;


    ft_ft(nbr);
    printf("%i", num);
}