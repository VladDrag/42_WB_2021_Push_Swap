/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_handlers2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:15:53 by vdragomi          #+#    #+#             */
/*   Updated: 2021/11/21 15:15:56 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	ft_reverse(char *x, int begin, int end)
{
	char	c;

	if (begin >= end)
		return ;
	c = *(x + begin);
	*(x + begin) = *(x + end);
	*(x + end) = c;
	ft_reverse(x, ++begin, --end);
}
