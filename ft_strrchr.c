/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 14:34:14 by syaseen           #+#    #+#             */
/*   Updated: 2026/09/23 19:15:12 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	val;

	val = (unsigned char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if ((unsigned char)s[i] == val)
			return ((char *)&s[i]);
		i--;
	}
	if ((unsigned char)s[0] == val)
		return ((char *)&s[0]);
	return (NULL);
}
