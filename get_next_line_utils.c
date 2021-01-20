/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 12:31:17 by agardet           #+#    #+#             */
/*   Updated: 2021/01/20 16:39:26 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_check_new_line(char *buf)
{

}

static size_t	ft_count_line(char *buf)
{
	ssize_t	i;
	size_t	count;

	i = -1;
	count = 0;
	while (buf[++i])
		if (buf[i] == '\n')
			count++;
	return (count);
}

static char		*ft_strjoin(char *s1, char *s2)
{
	size_t	total_len;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = alloc(sizeof(char) * (total_len + 1))))
		return (NULL);
	ft_strcat(res, (char *)s1);
	ft_strcat(res, (char *)s2);
	res[total_len] = 0;
	return (res);
}

static char		*ft_strcat(const char *dst, const char *src)
{
	int		i;
	int		j;
	char	*dst_cpy;
	char	*src_cpy;

	i = 0;
	j = 0;
	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	while (dst_cpy[i])
		i++;
	while (src_cpy[j])
	{
		dst_cpy[i + j] = src[j];
		j++;
	}
	dst_cpy[i + j] = 0;
	return (dst_cpy);
}

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
