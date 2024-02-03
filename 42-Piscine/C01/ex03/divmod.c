#include <unistd.h>
#include <stdio.h>

void divmod(int a, int b , int *div, int *mod)
{
    if (b != 0)
    {
    *div = a / b;
    *mod = a % b;
    }
        

}


int main(void)
{
    int first = 217;
    int second = 10;

    int bol;
    int kal;
    printf("a = %d, b = %d ", first, second);
    divmod(first, second, &bol, &kal);
    printf("a = %d, b = %d div is %d\nmod is%d", first, second, bol, kal);


}