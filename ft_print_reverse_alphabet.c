/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 14:31:52 by cpayen            #+#    #+#             */
/*   Updated: 2018/10/19 14:57:51 by cpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter != 'a')
	{
		ft_putchar(letter);
		letter = letter - 1;
	}
	ft_putchar(letter);
}

int		main()
{
	ft_print_reverse_alphabet();
}
