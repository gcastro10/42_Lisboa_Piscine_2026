/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric_test_explanation.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:42:02 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:22:57 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// By now this should be familiar to you.
int	ft_str_is_numeric(char *str)
{
	// String pattern
	int	i;
	
	// String pattern
	i = 0;
	// String pattern
	while (str[i] != '\0')
	{
		// Same as previous exercise except we are not checking for character digits and not the alpha characters.
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		// String pattern
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	numericString[] = "12345";
	char	alphaString[] = "abcde";

	printf("Expected 1: %i\n Expected 0: %i\n", ft_str_is_numeric(numericString), ft_str_is_numeric(alphaString));
	return (0);
}