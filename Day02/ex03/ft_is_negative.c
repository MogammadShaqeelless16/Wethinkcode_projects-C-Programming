/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sless <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:58:30 by sless             #+#    #+#             */
/*   Updated: 2020/06/19 15:58:32 by sless            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
    
		ft_putchar('P');
    else
		ft_putchar('N');
}

