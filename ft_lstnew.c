/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:44:37 by eyagiz            #+#    #+#             */
/*   Updated: 2022/02/10 14:28:21 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

// Fonksiyonun amacı listemizin içerisine yeni bir eleman eklemesi.
// 19'un malloc sonucu 16 (listin bayt değeri)
// 22'de listimizdeki yeni bir eleman eklerken ki contenti dışarıdan aldığımız contentinden alarak değiştiriyoruz.
// 23'de listimizdeki yeni bir elemanın next'ine NULL atıyoruz(nextimiz NULL göstermek zorunda)
