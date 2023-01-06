/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:42:02 by zkasmi            #+#    #+#             */
/*   Updated: 2021/11/17 18:57:40 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*tap;
	char	*ss1;

	ss1 = (char *)s1;
	i = 0;
	tap = (char *)s1;
	tap = malloc(sizeof(char) * ft_strlen(ss1)+1);
	if (tap == NULL)
		return (NULL);
	while (ss1[i])
	{
		tap[i] = ss1[i];
		i++;
	}
	tap[i] = '\0';
	return (tap);
}
