#include <unistd.h>
#include <stdio.h>

int reverse (int n) {
   int multiplier;
   int buffer;

   buffer = n;
   multiplier = 1;

   while (buffer > 0)
   {
		buffer /= 10;
		if (buffer > 0)
		{
			multiplier *= 10;
		}
	   }
	   printf("%d aaa %d\n", buffer, multiplier);
	while (n > 0)
	{
		buffer += (n % 10) * multiplier;
		multiplier /= 10;
		n /= 10;
	}
	return (buffer);
}

void	ft_putnbr(int nb)
{
	int	digit;

	nb = reverse(nb);
	printf("%d\n", nb);
	while(nb > 0)
	{
		digit = nb % 10;
		write(1, &digit, 1);
		nb /= 10;
	}
}

int	main(void)
{
	printf("%d\n", reverse(1234));
	ft_putnbr(5678);
	return(0);
}
