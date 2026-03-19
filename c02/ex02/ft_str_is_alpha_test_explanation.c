/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_test_explanation.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:29:47 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:23:03 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declare/Define a function called ft_str_is_alpha that returns an "int" and accepts a pointer to a char (string) as argument. 
int	ft_str_is_alpha(char *str)
{
	// Pattern for strings
	int	i;

	// Pattern for strings
	i = 0;
	// Pattern for strings
	while (str[i] != '\0')
	{
		// Condition, whil we iterate through the whole string, if any of the character positions is not from the lowercase alphabet (a-z) AND uppercase alphabet (A-Z). Then return 0. 
		if ((!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		// Pattern for strings
		i++;
	}
	// To get here we had to have iterated the whole string and not return 0. Which means it passed our if conditions and all characters in the strings are alpha. So we return 1. 
	return (1);
}


#include <stdio.h>
int	main(void)
{
	char	numericString[] = "12345";
	char	alphaString[] = "abcde";

	printf("Expected 0: %i\n Expected 1: %i\n", ft_str_is_alpha(numericString), ft_str_is_alpha(alphaString));
	return (0);
}