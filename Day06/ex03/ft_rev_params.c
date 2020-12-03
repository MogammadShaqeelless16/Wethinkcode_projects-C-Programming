/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_rev_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sless <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:18:49 by sless             #+#    #+#             */
/*   Updated: 2020/06/25 12:18:50 by sless            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

int		main(int argc, char **argv)
{
	int arg;
	int i;

	arg = argc - 1;
	while (arg > 0)
	{
		i = 0;
		while (argv[arg][i] != '\0')
		{
			ft_putchar(argv[arg][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		arg--;
	}
	return (0);
}
