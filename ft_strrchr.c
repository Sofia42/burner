/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 13:00:17 by igornea           #+#    #+#             */
/*   Updated: 2017/09/27 13:10:29 by igornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char *last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (last);
}
