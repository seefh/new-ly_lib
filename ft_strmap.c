/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 12:53:06 by shamidan          #+#    #+#             */
/*   Updated: 2019/01/28 18:07:09 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	char	*s2;
	int		i;

	s2 = NULL;
	i = 0;
	if (f && s)
	{
		s1 = (char *)s;
		s2 = malloc(sizeof(s1));
		while (s1[i] != '\0')
		{
			s2[i] = f(s1[i]);
			i++;
		}
	}
	return (s2);
}
