/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpayen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 12:07:48 by cpayen            #+#    #+#             */
/*   Updated: 2018/10/19 15:23:45 by cpayen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putabcde(char c)
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	ft_putabcde(a);
	while (a != 'z')
	{
		ft_putabcde(a);
		a = a + 1;
	}
	ft_putabcde(a);

}

int		main()
{
	ft_print_alphabet();
	return(0);
}

void ft_print_numbers(void)
{
	char	number;
	number = 1;
	ft_putabcde(number);
}
