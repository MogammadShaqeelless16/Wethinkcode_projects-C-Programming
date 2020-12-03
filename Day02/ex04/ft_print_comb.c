/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sless <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:58:49 by sless             #+#    #+#             */
/*   Updated: 2020/06/19 15:58:52 by sless            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0' - 1;
	while (++f <= '9')
	{
		s = f;
		while (++s <= '9')
		{
			t = s + 1;
			while (t <= '9')
			{
				ft_putchar(f);
				ft_putchar(s);
				ft_putchar(t);
				if (f != '7' || s != '8' || t != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				t++;
			}
		}
	}
}
