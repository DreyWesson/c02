/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:51:48 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/28 17:45:30 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if (!(tmp >= 65 && tmp <= 90))
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
