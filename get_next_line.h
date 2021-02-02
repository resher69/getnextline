/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agardet <agardet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 12:32:02 by agardet           #+#    #+#             */
/*   Updated: 2021/02/02 13:20:43 by agardet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>

ssize_t	ft_check_new_line(char *buf);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strcat(char *dst, const char *src);
size_t	ft_strlen(const char *s);
int				get_next_line(int fd, char **line);
#endif
