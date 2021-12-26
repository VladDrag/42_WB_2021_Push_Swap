/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdragomi <vdragomi@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 15:34:29 by vdragomi          #+#    #+#             */
/*   Updated: 2021/11/21 15:34:29 by vdragomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
	Outputs the character ’c’ to the given file descriptor.
RETURN VALUE
	None.
*/

#include "../incl/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
