#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    int temp;

    while (size >= 0)
    {
        int i = 0;
        while (i < size -1 )
        {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
        }
        i++;

        }

        size--;
    }
}

int main(void)
{
    int arr[] =  {9, 3, 5, 4, 10};
    int boy = 5;
    ft_sort_int_tab(arr, boy);
    printf("%d, %d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3], arr[4]);
}