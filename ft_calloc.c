/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syaseen <syaseen@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 08:27:23 by syaseen           #+#    #+#             */
/*   Updated: 2026/09/23 12:57:32 by syaseen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*temp;

	if (nmemb != 0 && size > ((size_t) - 1) / nmemb)
		return (NULL);
	sum = nmemb * size;
	temp = malloc(sum);
	if (!temp)
		return (NULL);
	ft_bzero(temp, sum);
	return (temp);
}