#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = (void *)malloc(sizeof(void *) * size);
	if (str == '\0')
		return (NULL);
	else
		ft_bzero(str, size);
	return (str);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
//	char		*smem;
//	char		*dmem;
	void		*store;

//	smem = (char *)src;
//	dmem = (char *)dst;
	if (ft_memalloc(n + 1))
		return (1);
	if (ft_memcpy(store, src, n))
		return (1);
	if (ft_memcpy(dest, store, n))
		return (1);
	else
		free(store);
	return (dest);
}

int		main(void)
{
	char	smem[100] = "Takalani";
	ft_memmove(smem+5, smem, strlen(smem)+1);
	printf("%s", smem);
	return (0);
}
