/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sless <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:16:47 by sless             #+#    #+#             */
/*   Updated: 2020/06/22 13:17:24 by sless            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>



char *ft_strcpy(char *dest, char *src)
{
  int index;
  
  index = 0;
  while (src[index] != '\0')
  {
  src[index] = dest[index];
    index++;
  }
  dest[index] != '\0';
  return (dest);
}
