/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufessler <ufessler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:13:35 by ufessler          #+#    #+#             */
/*   Updated: 2023/06/11 21:56:51 by ufessler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		a;
	int		b;
	int		d;

	if (!s1)
		return (NULL);
	a = 0;
	b = ft_strlen(s1);
	d = 0;
	while (s1[a] && find(s1[a], set))
		a++;
	while (a < b && find(s1[b - 1], set))
		b--;
	ptr = (char *)malloc(sizeof(char) * (b - a + 1));
	if (!ptr)
		return (NULL);
	while (a < b)
	{
		ptr[d] = s1[a];
		d++;
		a++;
	}
	ptr[d] = '\0';
	return (ptr);
}