
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		*start_str;

	i = 0;
	start_str = (int *)malloc(sizeof(int) * char);
	while (i < char)
	{
		start_str[i] = f(s[i]);
		i++;
	}
	return (str_tab);
}
