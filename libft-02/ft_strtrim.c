/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryamagis <ryamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:31:04 by ryamagis          #+#    #+#             */
/*   Updated: 2024/03/02 16:06:34 by ryamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

static char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s != '\0')
		{
			s++;
		}
		return ((char *)s);
	}
	while (*s != '\0')
	{
		if (*s == (const char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
		{
			i++;
		}
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]) && end > start)
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (str)
		ft_strlcpy(str, &s1[start], end - start + 2);
	else if (!str)
		return (NULL);
	return (str);
}
