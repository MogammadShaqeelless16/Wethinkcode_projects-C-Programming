/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sless <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:57:44 by sless             #+#    #+#             */
/*   Updated: 2020/06/19 15:57:47 by sless            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	 ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void	ft_print_alphabet(void)
{
	char	letter;
	letter = 'a';

	while(letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
