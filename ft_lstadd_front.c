/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:46:25 by eyagiz            #+#    #+#             */
/*   Updated: 2022/02/10 14:29:27 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// Fonksiyonun amacı listemizin başına yeni bir liste eklemesi.
// 21'de listemiz oluşmadıysa (yoksa) direkt olarak listemize new atanır.
// 24'de listemizin başına ekleme yaptık 25'te asıl değerini new yaptık.