/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:37:05 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/02 08:52:01 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	tmp;

	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if ((tmp < 'A' || tmp > 'Z') && (tmp < 'a' || tmp > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
