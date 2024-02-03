#include <stdio.h>

void uldivmod(int *a, int *b)
{
    if (*b != 0)
    {
        int div = *a / *b; // önce div ve mod işlemi yapıldı sonra swap edildi
        int mod = *a % *b;
        *a = div;
        *b = mod;
    }
}

int main(void)
{
    int first = 217;
    int second = 10;

    uldivmod(&first, &second);
    printf("div is %d mod is %d", first, second);
}