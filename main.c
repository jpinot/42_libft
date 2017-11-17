
#include <stdio.h>
#include "libft.h"

int		main(void)
{
	ft_putstr(ft_memchr("abcdef", 'a', 5));
	ft_putchar('\n');
	ft_putstr(memchr("abcdef", 'a', 5));
	return (0);
}
