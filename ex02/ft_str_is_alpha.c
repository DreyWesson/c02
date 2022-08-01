/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:37:05 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/01 22:35:45 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	tmp;
	int	value;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (!((tmp >= 97 && tmp <= 122) || (tmp >= 65 && tmp <= 90)))
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
