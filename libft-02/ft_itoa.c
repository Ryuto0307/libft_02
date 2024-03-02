/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryamagis <ryamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:59:03 by ryamagis          #+#    #+#             */
/*   Updated: 2024/03/02 14:52:42 by ryamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	long int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			digits;
	int			negative;
	long int	num;

	num = n;
	digits = count_digits(n);
	negative = 0;
	if (num < 0)
	{
		num *= -1;
		negative = -1;
	}
	str = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	str[digits--] = '\0';
	while ((digits > 0 && negative == -1) || (digits >= 0 && negative == 0))
	{
		str[digits--] = num % 10 + '0';
		num /= 10;
	}
	if (negative == -1)
		str[digits] = '-';
	return (str);
}
