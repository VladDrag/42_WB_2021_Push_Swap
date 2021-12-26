/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:30:33 by vdragomi          #+#    #+#             */
/*   Updated: 2021/11/21 15:30:33 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/libft.h"

/*
DESCRIPTION
	The atoi() function converts the initial portion of the string pointed
	to by nptr to int. atoi() does not detect errors.

RETURN VALUE
	The converted value.
*/

long	ft_atoi(const char *str)
{
	long	i;
	long	j;
	long	k;

	i = 0;
	j = 1;
	k = 0;
	while (str[i] != '\0' && (str[i] == ' ' || (str[i] > 8 && str[i] < 14)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] > 47 && str[i] < 58))
	{
		k = k * 10 + (str[i] - 48);
		i++;
	}
	return (k * j);
}
