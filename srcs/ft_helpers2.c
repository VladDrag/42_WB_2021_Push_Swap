/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:16:15 by vdragomi          #+#    #+#             */
/*   Updated: 2021/11/21 15:51:18 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	ft_exit(t_list *stack_a)
{
	ft_free_list(stack_a);
	exit(1);
}

void	ft_second_index(int i, t_list **stack_a, int *values)
{
	int		j;
	t_list	*counter;

	j = 0;
	counter = *stack_a;
	while (j < i)
	{
		counter = *stack_a;
		while (counter)
		{
			if (values[j] == ((t_vars *)(*counter).content)->value)
				((t_vars *)(*counter).content)->sorted_index = j;
			counter = (*counter).next;
		}
		j++;
	}
}
