/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 11:29:15 by shamidan          #+#    #+#             */
/*   Updated: 2018/12/19 17:51:18 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*ptr;
	size_t  i;

	i = 0;
	if (ptr[0] == '\0' )
		return(&ptr[i]);
	if (ptr)
	{
		while (i < size)
		{	ptr[i] = '\0';
			i++;
		}
	}
	return (ptr);
}
