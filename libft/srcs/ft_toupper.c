/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:36:30 by vdragomi          #+#    #+#             */
/*   Updated: 2021/11/21 15:36:30 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	If c is a lowercase letter, toupper() returns its uppercase equivalent,
	if an uppercase representation exists in the current locale. Otherwise, it
	returns c.
	If c is neither an unsigned char value nor EOF, the behavior of these
	functions is undefined.
RETURN VALUE
	The value returned is that of the converted letter,
	or c if the conversion was not possible.
*/

#include "../incl/libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}
