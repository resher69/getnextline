/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 12:32:02 by agardet           #+#    #+#             */
/*   Updated: 2021/01/20 16:39:33 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 15

# include <stdlib.h>
# include <sys/types.h>

static char			*ft_strjoin(char *s1, char *s2);
static char			*ft_strcat(const char *dst, const char *src);
static size_t		ft_strlen(const char *s);
//static char			*ft_check_new_line(char *str);
static size_t		ft_count_line(char *buf);

#endif
