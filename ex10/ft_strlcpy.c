/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:26:14 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/01 12:56:58 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (0);
	size--;
	while (i < (size))
	{
		dest[i] = src[i];
		i++;
	}
	if (i == (size))
		dest[size] = '\0';
	return (0);
}
