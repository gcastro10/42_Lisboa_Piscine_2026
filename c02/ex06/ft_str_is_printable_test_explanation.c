/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable_test_explanation.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:55:56 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:22:37 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str) // STRING ALERT!
{
	// string pattern
	int	i;
	
	// string pattern
	i = 0;
	// string pattern
	while (str[i] != '\0')
	{
		// check if its not between space = Dec 32, and ~ = Dec 126. Instead of the character space and ~ you could have replaced the ' ' with 32 and the '~' with 126. 
		if ((!(str[i] >= ' ' && str[i] <= '~')))
		{
			return (0);
		}
		// string pattern
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	printableString[] = "a b c d e ~";
	char	notPrintableString[] = "\n \n \n";

	printf("Expected 1: %i\n Expected 0: %i\n", ft_str_is_printable(printableString), ft_str_is_printable(notPrintableString));
	return (0);
}