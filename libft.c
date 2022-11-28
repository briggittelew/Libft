#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)) 
        return (1);
    return (0);
}

int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}

int ft_isalnum(int c)
{
    if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
        return (1);
    return (0);
}

int ft_isascii(int c)
{
    if (c >= 0 && c <= 255)
        return (1);
    return (0);
}