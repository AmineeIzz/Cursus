/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:10:47 by mizem             #+#    #+#             */
/*   Updated: 2024/01/27 17:33:19 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <limits.h>

char	*big_str(int fd)
{
	int		bytes_read;
	char	*str;
	char	*temp;

	str = malloc(BUFFER_SIZE + 1);
	temp = malloc(BUFFER_SIZE + 1);
	if (!str || !temp)
		return (NULL);
	bytes_read = read(fd, temp, BUFFER_SIZE);
	if (bytes_read == -1 || bytes_read == 0)
		return (NULL);
	while (bytes_read >= 1)
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == 0)
			break;
		temp[bytes_read] = '\0';
		str = ft_strjoin(str, temp);
	}
	free(temp);
	return (str);
}

char	*first_line(char *big_str)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	if (!big_str)
		return (NULL);
	while (big_str[i] && big_str[i] != '\n')
		i++;
	line = malloc(i + 2);
	if (!line)
		return (NULL);
	while (i > 0)
	{
		line[j] = big_str[j];
		j++;
		i--; 
	}
	line[j] = '\n';
	line[j + 1] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*first_one;

	if (BUFFER_SIZE < 0 || fd < 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	if (!str)
		str = big_str(fd);
	first_one = first_line(str);
	return (first_one);
}

int main()
{
	int fd = open("test.txt", O_RDWR);
	// get_next_line(fd);
	printf("%s", get_next_line(fd));	
	// system("leaks a.out");
}