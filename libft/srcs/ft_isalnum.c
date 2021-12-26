/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:30:53 by vdragomi          #+#    #+#             */
/*   Updated: 2021/11/21 15:30:53 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

/*
DESCRIPTION
	isalnum() checks for an alphanumeric character; it is equivalent to 
	(isalpha(c) || isdigit(c)).
RETURN VALUE
	The values returned are nonzero if the character c falls into the
	tested class, and zero if not.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
