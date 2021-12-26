/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:33:50 by vdragomi          #+#    #+#             */
/*   Updated: 2021/11/21 15:33:50 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Counts the number of elements in a list.
RETURN VALUE
	Length of the list.
*/

#include "../incl/libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		i;

	i = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
