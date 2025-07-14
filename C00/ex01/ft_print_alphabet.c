#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	latter;

	latter = 96;
	while (latter++ < 122)
		write(1, &latter, 1);
}
