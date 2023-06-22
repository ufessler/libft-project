/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufessler <ufessler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:22:21 by ufessler          #+#    #+#             */
/*   Updated: 2023/06/11 21:53:29 by ufessler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
		size_t	total;
		char	*mem;
		size_t	i;

		total = count * size;
		mem = malloc(total);
		if (mem == NULL)
				return (NULL);
		i = 0;
		while (i < total)
		{
				mem[i] = 0;
				i++;
		}
		return (mem);
}