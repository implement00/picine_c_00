/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykarpins <ynoty2@yahoo.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 00:47:33 by ykarpins          #+#    #+#             */
/*   Updated: 2025/06/05 16:50:15 by ykarpins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // stand for: standard input output
#include <unistd.h> // stand for UNIX standard
#include <stdlib.h> // stand for standard library, kinda odd name tbh
#include <string.h>    // string just like the name implies 

char	*t_number_to_char_array(int number)
	{
	char	*string;

	string = malloc(50 * sizeof(char));
	sprintf(string, "%d", number);
	return (string);
}

void	ft_putnbr(int number)
	{
	char	*string;

	string = t_number_to_char_array(number);
	write(1, string, strlen(string));
}

int	main(void)
	{
	int	sample;

	sample = 0;
	ft_putnbr(sample);
	return (0);
}
