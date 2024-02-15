int max(int *tab, unsigned int len)
{
	unsigned int i;
	int max = tab[0];
	i = 0;

	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return max;
}

#include <stdio.h>

int main(void)
{
    int tab[20] = {1, 4, 5, 3, 59};
    int size = 5;
    printf("%d", max(tab, size));
}