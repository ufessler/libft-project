/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufessler <ufessler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:33:13 by ufessler          #+#    #+#             */
/*   Updated: 2023/06/09 15:07:58 by ufessler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	b;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		ptr[i] = b;
		i++;
	}
	return (str);
}