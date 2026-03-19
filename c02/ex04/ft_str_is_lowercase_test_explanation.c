/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_test_explanation.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:46:23 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:22:51 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str) // Every time you see an argument as string. It should click that you will most likely have to iterate this string therefore it should automatically come to you that you need to do the string pattern. 
{
	// String pattern.
	int	i;
	
	// String pattern.
	i = 0;
	// String pattern.
	while (str[i] != '\0')
	{
		// Check if the character is not lowercase.
		if ((!(str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		// String pattern.
		i++;
	}
	// if its lowercase then it will reach this and return 1.
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	lowercaseString[] = "abcde";
	char	uppercaseString[] = "ABCDE";

	printf("Expected 1: %i\n Expected 0: %i\n", ft_str_is_lowercase(lowercaseString), ft_str_is_lowercase(uppercaseString));
	return (0);
}