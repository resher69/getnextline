/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:07:16 by agardet           #+#    #+#             */
/*   Updated: 2021/02/02 14:19:19 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_get_line(char *save)
{
	char	*line;
	ssize_t	i;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!(line = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	line[i] = 0;
	while (--i >= 0)
		line[i] = save[i];
	return (line);
}

static int		ft_error_handler(char *save, char *buf)
{
	if (save)
		free(save);
	if (buf)
		free(buf);
	return (-1);
}

static char		*ft_rest_line(char *save)
{
	char	*rest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!save)
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == 0)
	{
		free(save);
		return (NULL);
	}
	if (!(rest = malloc(sizeof(char) * (ft_strlen(save) - i + 1))))
		return (NULL);
	i++;
	while (save[i])
		rest[j++] = save[i++];
	rest[j] = 0;
	free(save);
	return (rest);
}

int		get_next_line(int fd, char **line)
{
	static char	*save;
	char		*buf;
	int			ret;

	if ((fd < 0 || !line || BUFFER_SIZE <= 0) ||
				((!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))))
		return (-1);
	ret = 1;
	while ((ft_check_new_line(save) != 0) && (ret != 0))
	{
		if ((ret = read(fd, buf, BUFFER_SIZE)) < 0)
			return (ft_error_handler(save, buf));
		buf[ret] = 0;
		save = ft_strjoin(save, buf);
	}
	free(buf);
	*line = ft_get_line(save);
	save = ft_rest_line(save);
	if (ret != 0)
		return (1);
	free(save);
	return (0);
}
