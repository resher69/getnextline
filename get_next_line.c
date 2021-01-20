/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:07:16 by agardet           #+#    #+#             */
/*   Updated: 2021/01/20 18:48:22 by kali             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


static char	*ft_save_line(char *buf)
{
	char	*save;
	size_t	i;
	
	while (buf[i] && buf[i] != '\n')
		i++;
	if (!(save = malloc(sizeof(char) * i + 1)))
		return (NULL);
	save[i] = 0;
	while (--i >= 0)
		save=[i] = buf[i];
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
		{
			if (!(rest = maloc(sizeof(char))))
				return (NULL);
			while (buf[i])
				rest[j++] == buf[i++];
			
		i++;
	}
	rest[j] = 0;
	return (rest);
}

int		ft_error_handler(char *save, char *buf)
{
	free(save);
	free(buf);
	return (-1);
}

int		get_next_line(int fd, char **line)
{
	char *buf;
	char *str;

	if ((fd <= 0 || !line || BUFFER_SIZE <= 0) ||
				((!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))))
		return (-1);
	
}

