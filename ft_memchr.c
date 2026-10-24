/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 07:47:06 by syaseen           #+#    #+#             */
/*   Updated: 2026/09/23 18:40:22 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		val;

	val = (unsigned char)c;
	str = s;
	while (n > 0)
	{
		if (*str == val)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}