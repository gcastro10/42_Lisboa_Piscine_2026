/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:20:49 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 17:34:38 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// For the following exercises, I did them differently than majority of my piscine, actually I was unable to find anyone doing it the same way I did them. Most people will all these functions directly in the main function. However I'm against that. To my current knowledge the main functions are supposed to be extremely easy to read, and should have minimal code. In my view its the brains of the operation and I don't want to fill it with clutter. Its totally acceptable for the piscine and the exam to do it in the main functions. However, I will not be doing that. 

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
