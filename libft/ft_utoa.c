/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drarlean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:14:49 by drarlean          #+#    #+#             */
/*   Updated: 2021/02/14 11:16:54 by drarlean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbr_len(unsigned long long num, int base)
{
	int length;

	length = 0;
	while (num > 0)
	{
		num /= base;
		length++;
	}
	return (length);
}

char	*ft_utoa(unsigned long long num, const char *base)
{
	int		length;
	char	*str;
	int		base_len;

	if (num == 0)
		return (ft_strdup("0"));
	base_len = ft_strlen(base);
	length = ft_nbr_len(num, base_len);
	if (!(str = (char*)malloc(sizeof(char) * length)))
		return (0);
	str[length] = 0;
	while (--length >= 0)
	{
		str[length] = base[(num % base_len)];
		num /= base_len;
	}
	return (str);
}
