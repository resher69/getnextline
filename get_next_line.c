/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:07:16 by agardet           #+#    #+#             */
/*   Updated: 2021/01/20 16:05:44 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


static char	*ft_save_line(char *buf)
{
	char	*save;
	size_t	i;
	
	while (buf[i] && buf[i] != '\n')
	{
		save[i] = buf[i];
		i++;
	}
	save[i] = 0;
	return(save);
}

static char	*ft_rest_line(char *buf)
{
	char	*rest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			while (buf[i])
				rest[j++] == buf[i++];
		i++;
	}
	return (rest);
}

int		get_next_line(int fd, char **line)
{
	char *buf;
	char *str;

	if ((fd <= 0 || !line || BUFFER_SIZE <= 0) ||
				((!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))))
		return (-1);
	
}

