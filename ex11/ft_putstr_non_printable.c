/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduwole <doduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:12:32 by doduwole          #+#    #+#             */
/*   Updated: 2022/08/01 12:35:20 by doduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_calc_hex(int val)
{
	if (val < 10)
		ft_putchar(val + '0');
	else
		ft_putchar(val + 87);
}
void	ft_print_hex(char c)
{
	int		negative_char;
	char	hex_div;
	char	hex_mod;
	ft_putchar('\\');
	if (c < 0)
	{
		negative_char = (-128 - (c)) * -1 + 128;
		hex_div = negative_char / 16;
		hex_mod = negative_char % 16;
	}
	else
	{
		hex_div = c / 16;
		hex_mod = c % 16;
	}
	ft_calc_hex(hex_div);
	ft_calc_hex(hex_mod);
}
void	ft_putstr_non_printable(char *str)
{
	int		i;
	int	tmp;

	i = 0;
	while (str[i])
	{
		tmp =str[i];
		if (tmp >= 32 && tmp <= 126)
			ft_putchar(tmp);
		else
			ft_print_hex(tmp);
		i++;
	}
}


int	main(void)
{
	char str[21] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}