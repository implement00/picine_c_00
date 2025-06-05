/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarpins <ynoty2@yahoo.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 02:52:40 by ykarpins          #+#    #+#             */
/*   Updated: 2025/06/05 02:58:11 by ykarpins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int number)
	{
	int	last;

	if (number >= 0)
	{
		write(1, &"P", 1);
	}
	else
	{
		write(1, &"N", 1);
	}
}

int	main(void)
	{
	int	number;

	number = -20;
	ft_is_negative(number);
}
