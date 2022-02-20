/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:32:26 by eyagiz            #+#    #+#             */
/*   Updated: 2022/02/14 12:46:56 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*itoa;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	itoa = malloc(sizeof(char) * len + 1);
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	while (nbr > 0)
	{
		itoa[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		itoa[0] = '-';
	if (n == 0)
		itoa[0] = '0';
	return (itoa);
}

// Fonksiyonun amacı alınan int değeri chara dönüştürmesi.
// 37'de çağırdığımız fonksiyon basamak sayısı buluyor
// 43'de basamak sayısının + 1'i (NULL için) kadar yer açıyor.
// 46'da sonuna NULL attık (tersten gittiğimiz için!)
// 47'de ki fonksiyon sondan başlayarak değeri char'a dönüştürüyor