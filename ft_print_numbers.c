
#include <unistd.h>

void ft_putchar(char g)
{ 
	write(1, &g, 1);
}



void ft_is_negative(int n)
{
	char h;
	h = 'n';

	if (n < 0)
		ft_putchar('N');
	else if (n >= 0)
		ft_putchar('P');
}
int main()
{
	ft_is_negative(5);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative(-99);
	ft_putchar('\n');
}
