/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:31:32 by vdragomi          #+#    #+#             */
/*   Updated: 2021/11/21 15:31:32 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

/*
DESCRIPTION
	isprint() checks for any printable character including space.
RETURN VALUE
	The values returned are nonzero if the character c falls into the
	tested class, and zero if not.
*/

int	ft_isprint(int c)
{
	return (c > 31 && c < 127);
}
