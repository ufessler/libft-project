/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufessler <ufessler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:48:29 by ufessler          #+#    #+#             */
/*   Updated: 2023/06/08 09:48:29 by ufessler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
        ft_isdigit(int c)
{
        return (c >= '0' && c <= '9');
}