/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:35:48 by doduwole          #+#    #+#             */
/*   Updated: 2022/07/28 17:45:51 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if (!(tmp >= 97 && tmp <= 122))
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
