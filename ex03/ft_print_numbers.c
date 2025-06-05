/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarpins <ynoty2@yahoo.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 01:44:08 by ykarpins          #+#    #+#             */
/*   Updated: 2025/06/05 13:58:20 by ykarpins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/*
Utlising pointer with type characther, as that only write func accepts. 
Allows for clean and safe returns of variable values.
*/

char	*t_convert_num_to_char_array(int number)
	{
	char	*string;

	string = malloc(50 * sizeof(char));
	if (string == NULL)
	{
		return (NULL);
	}
	sprintf(string, "%d", number);
	return (string);
}

void	ft_print_numbers(void)
	{
	int		x;
	char	*y;

	x = 0;
	while (x < 10)
	{
		y = t_convert_num_to_char_array(x);
		if (y != NULL)
		{
			write(1, y, 1);
			free(y);
		}
		x++;
	}
}

int	main(void)
	{
	ft_print_numbers();
	return (0);
}
