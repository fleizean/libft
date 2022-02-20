/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:07:21 by eyagiz            #+#    #+#             */
/*   Updated: 2022/02/14 11:46:45 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t len)
{
	ft_memset(dest, '\0', len);
}

// Fonksiyonun amacı dışarıdan aldığımız string dizesinde n sayısı kadar NULL atma.