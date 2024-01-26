#include <unistd.h>

void ft_print_comb2(void)
{
    int first;
    int second;

    first = 48;
    while (first <= 57)
    {
        second = first + 1;
        while (second <= 57)
        {
            char digit_1 = 48 + first;
            char digit_2 = 48 + second;
            write(1, &second, 1);
            write(1, &first,1);
            write(1, ',', 1);
            second++;
        }
        first++;
    }
}

int main(void)
{
    ft_print_comb2();
}
