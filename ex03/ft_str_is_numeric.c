/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:02:13 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/28 17:45:45 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
		if (!(tmp >= 48 && tmp <= 57))
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
