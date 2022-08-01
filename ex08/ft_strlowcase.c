/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:14:32 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/01 12:58:24 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;
	int	tmp;

	i = 0;
	while (str[i] != '\0')
	{
		tmp = str[i];
		if (tmp >= 65 && tmp <= 90)
		{
			tmp += 32;
			str[i] = tmp;
		}
		i++;
	}
	return (str);
}
