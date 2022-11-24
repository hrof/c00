#include <unistd.h>

void ft_is_negative(int n);

void ft_is_negative(int n)
{
	char	sign;
	sign = 80;
	if (n < 0)
	{
		sign = sign - 2;
	}
	write(1, &sign, 1);
}

int main(void)
{
	ft_is_negative(4);
	ft_is_negative(-10);
}
