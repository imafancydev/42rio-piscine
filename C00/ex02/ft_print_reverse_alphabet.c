#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    int latter;

    latter = 122;

    while (latter-- > 97)
        write(1, &latter, 1);
}
