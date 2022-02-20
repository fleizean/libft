/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:02:47 by eyagiz            #+#    #+#             */
/*   Updated: 2022/02/14 15:18:24 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pdst;

	i = 0;
	pdst = (unsigned char *)s;
	while (i < n)
	{
		pdst[i] = c;
		i++;
	}
	return (pdst);
}

// Fonksiyonun amacı dışarıdan alınan s dizesini n sayısı kadar c parametresi ile belirtilen tek karakterlik char verisi ile değiştirmesi (0. indeksten başlayarak)