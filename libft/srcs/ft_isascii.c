/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:31:08 by vdragomi          #+#    #+#             */
/*   Updated: 2021/11/21 15:31:08 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

/*
DESCRIPTION
	isascii() checks whether c is a 7-bit unsigned char value that fits into
	the ASCII character set.
RETURN VALUE
	The values returned are nonzero if the character c falls into the
	tested class, and zero if not.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
