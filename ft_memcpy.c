/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 15:13:02 by syaseen           #+#    #+#             */
/*   Updated: 2026/09/22 12:27:46 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pto;
	unsigned char	*pfrom;

	if (!dest && !src)
		return (NULL);
	pto = (unsigned char *)dest;
	pfrom = (unsigned char *)src;
	while (n-- > 0)
		*pto++ = *pfrom++;
	return (dest);
}