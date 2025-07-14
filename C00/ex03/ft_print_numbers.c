#include <unistd.h>

void    ft_print_numbers(void)
{
    int number;

    number = '1';
    while(number < '10')
        write(1, &number,1);
}