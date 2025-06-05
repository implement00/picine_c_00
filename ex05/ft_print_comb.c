/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarpins <ynoty2@yahoo.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:58:12 by ykarpins          #+#    #+#             */
/*   Updated: 2025/06/05 16:52:23 by ykarpins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // standard input, ouput
#include <unistd.h> // uni for; UNIX standard 

void	ft_print_comb(char a)
	{
	char		b;
	char		c;

	while (a < 56)
	{
		b = a + 1;
		while (b < 57)
		{
			c = b + 1;
			while (c < 58)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != 7 || b != 8 || c != 9)
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
A initializes the ascii code 0 represented by 
char allowed withn the write()
*/

int	main(void)
	{
	char	a;

	a = 48;
	ft_print_comb(a);
}
