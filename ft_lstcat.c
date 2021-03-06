/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awali-al <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 01:02:28 by awali-al          #+#    #+#             */
/*   Updated: 2018/10/22 02:38:57 by awali-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcat(t_list *lst1, t_list *lst2)
{
	t_list	*r;

	r = lst1;
	while (lst1)
		lst1 = lst1->next;
	lst1 = lst2;
	return (r);
}
