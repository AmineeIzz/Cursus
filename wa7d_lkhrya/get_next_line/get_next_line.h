/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:59:17 by mizem             #+#    #+#             */
/*   Updated: 2024/02/18 14:02:03 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 8
# endif

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stddef.h>

char	*get_next_line(int fd);
int		counter(char *s);
char	*ft_read(int fd, char *res);
char	*find_line(char *str);
char	*update_str(char *old_str);
size_t	ft_strlen(char *s);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
int		ft_strchr(char *s);

#endif