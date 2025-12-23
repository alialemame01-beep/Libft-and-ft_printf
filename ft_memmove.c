/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:21:45 by aalemami          #+#    #+#             */
/*   Updated: 2025/09/04 15:21:45 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*sdest;
	unsigned char	*ssrc;
	size_t			i;

	sdest = (unsigned char *) dest;
	ssrc = (unsigned char *) src;
	i = 0;
	if (dest <= src)
	{
		while (i < n)
		{
			sdest[i] = ssrc[i];
			i++;
		}
		return (dest);
	}
	while (i < n)
	{
		sdest[(n - i) - 1] = ssrc[(n - i) - 1];
		i++;
	}
	return (dest);
}
