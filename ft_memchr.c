/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufessler <ufessler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:22:25 by ufessler          #+#    #+#             */
/*   Updated: 2023/06/09 15:23:57 by ufessler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	i = 0;
	ptr = (unsigned char *)s;
	if (s == NULL && n == 0)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (&(ptr[i]));
		}
		i++;
	}
	return (NULL);
}