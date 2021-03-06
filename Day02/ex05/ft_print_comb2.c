/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sless <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:59:06 by sless             #+#    #+#             */
/*   Updated: 2020/06/19 15:59:08 by sless            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb2(void)
{
  int a;
  int b;
  for (a = -1 ; ++a <= 98; a++)
  {
    b = a;
    while (++b <= 99)
    {
      
      ft_putchar((char)(a/10) + '0');
      ft_putchar((char)(a%10) + '0');
      ft_putchar(' ');
      ft_putchar((char)(b/10) + '0');
      ft_putchar((char)(b%10) + '0');
      if ( (a != 98))
      {
        ft_putchar(',');
        ft_putchar(' ');
      }
    }
  }
}

