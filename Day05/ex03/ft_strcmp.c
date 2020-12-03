/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sless <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:11:08 by sless             #+#    #+#             */
/*   Updated: 2020/06/22 15:03:11 by sless            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strcmp(char *s1, char *s2)
{
	 int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	if ((s1[index] == '\0' && s2[index] != '\0') || (s2[index] == '\0' && s1[index] != '\0'))
		return (s1[index] - s2[index]);
	return (0);
}
