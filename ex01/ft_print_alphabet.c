/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarpins <ynoty2@yahoo.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 01:02:58 by ykarpins          #+#    #+#             */
/*   Updated: 2025/06/05 01:49:41 by ykarpins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*
The best way to achieve this is using keycodes, native to C 
https://media.geeksforgeeks.org/wp-content/uploads/20240304094301/ASCII-Table.png
The value of a int directly converts to a keycode char, and vise-versa.
*/

void	ft_print_alphabet(void)
	{
	char	aplha;

	aplha = 'a';
	printf("Complete alphabet: \n \n \n");
	while (aplha < '{')
	{
		write(1, &aplha, 1);
		aplha = (aplha + 1);
	}
}

int	main(void)
	{
	ft_print_alphabet();
}
