/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name_test_explanation.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:20:47 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 17:34:31 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// When you are asked to manipulate parameters either accept x amount or to write a specific argument, you need "int argc, char **argv". You can actually name them whatever you want, but the first parameter must be an int, and the second an array of strings. 
int	main(int argc, char **argv)
{
	// Since for this exact question we don't need argc, we set it to void. 
	(void)argc;
	// why do i prefer doing this? keeps the main clean, + we've been doing exercises like ft_putstr and others. So we already know how to do them like I did above. So why not continue doing what we've been practicing instead of mixing it directly in main with argv? Just keeps it simple!
	// also, in the real world if you were working for company, odds are you would already have functions like ft_putstr done and in a library of your own. So instead of repeating code, you could literally just call those functions and import the library...
	// This was you're learning to keep your code modular, and you are also seperating concerns. Which in the future for much more complex projects will make your life 1000x easier to debug. When things don't go to plan.
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
