/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:07:52 by eyagiz            #+#    #+#             */
/*   Updated: 2022/02/14 12:04:42 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}

// Fonksiyonun amacından çok önemli olan şey strncmp ile farkıdır, strncmp çok boyutlu dizi de NULL görünce durur fakat memcmp memorye göre işlem yaptığı için
// durmaz ve devam edip çok boyutlu dizideki son veriye kadar işlem yapar.

/*
Örnek main:


int main(void)
{
    
    
	char a[10] = {'E','n','g','l','i','s','h',0,'A'};
    char b[10] = {'E','n','g','l','i','s','h',0,'B'};
    
    printf("strncmp(a, b):%d\n", ft_strncmp(a, b, 10));
    printf("memcmp(a, b):%d\n", ft_memcmp(a, b, 10));
    
	return 0;
}
*/

// sonucu görünce yeni bir bilgi keşfetmiş olacaksınız :)