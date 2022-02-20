/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eyagiz <eyagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:46:20 by eyagiz            #+#    #+#             */
/*   Updated: 2022/02/10 14:31:08 by eyagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}

// Fonksiyonun amacı listemizin sonuna ekleme yapıyor
// liste yoksa dışarıdan aldığımız liste direkt new olarak atanır.
// 26'da listemizin lastını bulduğumuz fonksiyon ile lastını bulduk ve aux diye oluşturduğumuz fonksiyonun içine attık.
// 27'de bulduğumuz listenin next'ine aldığımız liste değeri olan new'i atadık.