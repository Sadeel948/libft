/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 19:04:50 by syaseen           #+#    #+#             */
/*   Updated: 2026/09/19 16:21:38 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*final;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	final = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!final)
		return (NULL);
	ft_memcpy(final, s1, len1);
	ft_memcpy(final + len1, s2, len2);
	final[len1 + len2] = '\0';
	return (final);
}
