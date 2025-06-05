/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarpins <ynoty2@yahoo.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 00:53:58 by ykarpins          #+#    #+#             */
/*   Updated: 2025/06/05 01:02:55 by ykarpins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // standard input-output
#include <unistd.h> // unix standard

void	ft_putchar(char characther)
	{
	printf("\n");
	write(1, &characther, 1);
}

int	main(void)
	{
	char	a;

	a = 'A';
	ft_putchar(a);
}
