/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ext_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awali-al <awali-al@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:06:15 by awali-al          #+#    #+#             */
/*   Updated: 2021/09/13 13:23:59 by awali-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ext_check(char *file, char *extention)
{
	int	i;
	int	j;

	i = ft_strlen(file) - 1;
	j = ft_strlen(extention) - 1;
	if (i < j)
		return (1);
	while (i > -1 && j > -1)
	{
		if (file[i] != extention[j])
			return (1);
		i--;
		j--;
	}
	return (0);
}