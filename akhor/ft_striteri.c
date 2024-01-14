/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 21:38:34 by mizem             #+#    #+#             */
/*   Updated: 2024/01/08 16:48:16 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// void foo(unsigned int i, char *s)
// {
// 	i = 5;
// 	*s -= i;
// }
// int main()
// {
// 	char str[] = "999";
// 	void (*f)(unsigned int, char*) = &foo;
// 	ft_striteri(str, f);
// 	printf("%s", str);
// }