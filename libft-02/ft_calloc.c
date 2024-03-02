/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryamagis <ryamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:39:19 by yamagishiry       #+#    #+#             */
/*   Updated: 2024/03/02 15:05:16 by ryamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memset(void *buf, int ch, size_t n)
{
	char	*p;

	p = (char *)buf;
	while (n > 0)
	{
		p[n - 1] = ch;
		n--;
	}
	return (buf);
}

static void	ft_bzero(void *buf, size_t n)
{
	ft_memset(buf, 0, n);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && size != 0)
	{
		if (count > SIZE_MAX / size)
			return (NULL);
	}
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
