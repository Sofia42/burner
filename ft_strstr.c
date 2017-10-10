/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 13:12:45 by igornea           #+#    #+#             */
/*   Updated: 2017/09/27 13:49:08 by igornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strstr(const char *big, const char *little)
{
	int l1;
	int l2;

	l1 = ft_strlen(big);
	l2 = ft_strlen(little);
	if (!l2)
		return (char *)big;
	while (l1 >= l2)
	{
		l1--;
		if (!ft_memcmp(big, little, l2))
			return (char *)big;
		big++;
	}
	return (0);
}
