/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anikitin <anikitin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 14:10:44 by anikitin          #+#    #+#             */
/*   Updated: 2024/07/10 13:24:48 by anikitin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    The isascii() function tests for an ASCII character, which is any 
    character between 0 and octal 0177 inclusive
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
