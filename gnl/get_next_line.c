/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkasmi <zkasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:08:16 by zkasmi            #+#    #+#             */
/*   Updated: 2021/11/24 21:31:52 by zkasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*print_the_line(char **stock2)
{
	char	*temp;
	size_t	i;
	char	*str;

	i = 0;
	while ((*stock2)[i] != '\n' && (*stock2)[i])
		i++;
	if ((*stock2)[i] == '\n')
	{
		str = ft_substr(*stock2, 0, i + 1);
		temp = ft_strdup(*stock2 + i + 1);
		free(*stock2);
		*stock2 = temp;
		if (!**stock2)
		{
			free(*stock2);
			*stock2 = NULL;
		}
		return (str);
	}
	str = ft_strdup(*stock2);
	free(*stock2);
	*stock2 = NULL;
	return (str);
}

char	*strcheck(char **stock2, ssize_t re)
{
	if (re < 0)
		return (NULL);
	if ((!stock2 || !*stock2) && !re)
		return (NULL);
	return (print_the_line(stock2));
}

char	*get_next_line(int fd)
{
	char		*temp;
	static char	*stock;
	char		*buf;
	ssize_t		re;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = malloc (sizeof(char) * BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	re = read(fd, buf, BUFFER_SIZE);
	while (re > 0)
	{
		buf[re] = '\0';
		if (!stock)
			stock = ft_strdup("");
		temp = ft_strjoin(stock, buf);
		free(stock);
		stock = temp;
		if (ft_strchr(buf, '\n'))
			break ;
		re = read(fd, buf, BUFFER_SIZE);
	}
	free(buf);
	return (strcheck(&stock, re));
}
