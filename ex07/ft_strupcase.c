/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:36:43 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/31 13:27:58 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	tmp;

	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (tmp >= 97 && tmp <= 122)
		{
			tmp -= 32;
			str[i] = tmp;
		}
		i++;
	}
	return (str);
}
