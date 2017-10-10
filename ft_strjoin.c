/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 11:08:00 by igornea           #+#    #+#             */
/*   Updated: 2017/10/01 13:47:46 by igornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned long	i;
	char			*str;

	if (s1 && s2)
	{
		i = 0;
		if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + \
							ft_strlen(s2) + 1))))
			return (0);
		while (i <= ft_strlen(s1))
		{
			str[i] = s1[i];
			i++;
		}
		i = 0;
		while (i <= ft_strlen(s2))
		{
			str[i + ft_strlen(s1)] = s2[i];
			i++;
		}
		str[i + ft_strlen(s1)] = '\0';
		return (str);
	}
	return (0);
}
