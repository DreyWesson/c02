/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:34:04 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/28 17:48:30 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	tmp;
	int	value;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (tmp >= 0 && tmp <= 31)
		{
			value = 0;
			break ;
		}
		else
			value = 1;
		i++;
	}
	return (value);
}
