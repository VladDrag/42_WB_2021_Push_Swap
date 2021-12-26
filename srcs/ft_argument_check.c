/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:17:23 by vdragomi          #+#    #+#             */
/*   Updated: 2021/11/24 14:18:15 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	ft_argument_check(t_list **stack_a, t_list **stack_b)
{
	int	argument_num;

	argument_num = ft_lstsize(*stack_a);
	if (argument_num == 2)
		ft_algo_two(stack_a);
	else if (argument_num == 3)
		ft_algo_three(stack_a);
	else if (argument_num == 4)
		ft_algo_four(stack_a, stack_b);
	else if (argument_num == 5)
		ft_algo_five(stack_a, stack_b);
	else if (argument_num > 5)
		ft_algo_hundred(stack_a, stack_b);
}

void	ft_radix_binary(t_list **s_a, t_list **s_b, int i)
{
	int	nav;
	int	counter;

	counter = ft_lstsize(*s_a);
	nav = 0;
	while (nav < counter)
	{
		if ((((((t_vars *)(*s_a)->content)->sorted_index) >> i) & 1) == 1)
			rotate_stack(s_a, "ra");
		else
			push_b(s_a, s_b);
		nav += 1;
	}
}

int	ft_get_bits(t_list **stack_a)
{
	t_list	*temp;
	int		max;
	int		bits;

	bits = 0;
	temp = *stack_a;
	max = ((t_vars *)(temp)->content)->sorted_index;
	while (temp->next != NULL )
	{
		if (max < ((t_vars *)(temp)->next->content)->sorted_index)
			max = ((t_vars *)(temp)->next->content)->sorted_index;
		temp = temp->next;
	}
	while ((max >> bits) != 0)
		bits++;
	bits++;
	return (bits);
}

void	ft_algo_hundred(t_list **stack_a, t_list **stack_b)
{
	int		nav;
	int		bits;
	int		i;
	int		counter;

	counter = 0;
	bits = ft_get_bits(stack_a);
	nav = 0;
	i = 0;
	while (i < bits)
	{
		ft_radix_binary(stack_a, stack_b, i);
		nav = 0;
		counter = ft_lstsize(*stack_b);
		while (nav < counter)
		{
			push_a(stack_a, stack_b);
			nav += 1;
		}
		if (ft_sorting_check(stack_a) == 1)
			ft_exit(*stack_a);
		i++;
	}
}
