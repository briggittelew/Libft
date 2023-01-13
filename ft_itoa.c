#include "libft.h"

char *ft_itoa(int n)
{
	int		u;
	int		n_itoa;
	char	*nstr;
	const char	*c;

	nstr = malloc(sizeof(char) * (sizeof(n) + 1));
	if (n >= 0)
	{
		if (n < 10)
			ft_strcat(nstr, (n + "0"));
			//nstr = nstr + (n + '0');
		if (n >= 10)
		{
			n_itoa = n / 10;
			ft_itoa(n_itoa);
			u = n % 10;
			c = u + "0";
			ft_memmove(nstr, c, ft_strlen(c));
		}
	}
	else
	{
		//nstr = nstr + '-';
		ft_strcat(nstr, "-");
		n = n * -1;
		ft_itoa(n);
	}	
	return (nstr);
}

int	main(void)
{
	unsigned int n;
	
	n = 352;
	
	/*printf("%d\t", n /10);
	printf("%d\n", n %10);*/
	
	printf("%s\n", ft_itoa(n));
}