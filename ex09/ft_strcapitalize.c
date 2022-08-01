/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:38:48 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/01 08:14:35 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_next_cap(char tmp)
{
	if (
		(tmp >= 20 && tmp <= 47)
		|| (tmp >= 58 && tmp <= 64)
		|| (tmp >= 91 && tmp <= 96)
		|| (tmp >= 123 && tmp <= 126)
	)
		return (0);
	return (1);
}

int	ft_alpha(char tmp)
{
	if ((tmp >= 97 && tmp <= 122) || (tmp >= 65 && tmp <= 90))
		return (0);
	return (1);
}

int	ft_isnum(char tmp)
{
	if (tmp >= 48 && tmp <= 57)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	tmp;
	int	switch_case;

	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (ft_is_next_cap(tmp) == 0 || i == 0)
			switch_case = 0;
		if (ft_isnum(tmp) == 0)
			switch_case = 1;
		if (switch_case == 0 && ft_alpha(tmp) == 0)
		{
			if (tmp >= 97 && tmp <= 122)
				tmp -= 32;
			switch_case = 1;
		}
		else if (switch_case == 1 && (tmp >= 65 && tmp <= 90))
				tmp += 32;
		str[i] = tmp;
		i++;
	}
	return (str);
}
