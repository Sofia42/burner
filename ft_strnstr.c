/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 13:49:41 by igornea           #+#    #+#             */
/*   Updated: 2017/09/30 16:08:45 by igornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			n;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len)
	{
		if (*big == *little)
		{
			s1 = (unsigned char *)big;
			s2 = (unsigned char *)little;
			n = len;
			while (*s1 == *s2 && *s2 != '\0' && n--)
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
				return (char *)big;
		}
		len--;
		big++;
	}
	return (NULL);
}
