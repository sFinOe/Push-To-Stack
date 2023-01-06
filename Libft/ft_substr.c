/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:38:43 by zkasmi            #+#    #+#             */
/*   Updated: 2021/11/24 16:55:28 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		start = ft_strlen(s);
		len = 0;
	}
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	tab = malloc(sizeof(char) * len + 1);
	if (tab == NULL)
		return (NULL);
	while (i < len)
	{
		tab[i] = s[start + i];
			i++;
	}
	tab[i] = '\0';
	return (tab);
}
