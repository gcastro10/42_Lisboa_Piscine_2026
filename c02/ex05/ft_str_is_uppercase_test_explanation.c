/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase_test_explanation.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:51:40 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:22:44 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str) // Ding Ding Ding String pattern alert.
{
	// String pattern
	int	i;
	
	// String pattern
	i = 0;
	// String pattern
	while (str[i] != '\0')
	{
		// check if the character is not an upper case alphabetical character. 
		if ((!(str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		// String pattern
		i++;
	}
	// if it is an uppercase alphabetical character than it reaches here and returns 1. 
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	lowercaseString[] = "abcde";
	char	uppercaseString[] = "ABCDE";

	printf("Expected 0: %i\n Expected 1: %i\n", ft_str_is_uppercase(lowercaseString), ft_str_is_uppercase(uppercaseString));
	return (0);
}