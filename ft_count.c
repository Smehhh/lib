/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgueren <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 19:48:49 by wgueren           #+#    #+#             */
/*   Updated: 2018/12/08 16:03:22 by wgueren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(const char *s, char c)
{
	int ch;
	int i;

	if (s == NULL)
		return (0);
	i = 0;
	ch = 0;
	while (*s)
	{
		if (i == 1 && *s == c)
			i = 0;
		if (i == 0 && *s != c)
		{
			i = 1;
			ch++;
		}
		s++;
	}
	return (ch);
}