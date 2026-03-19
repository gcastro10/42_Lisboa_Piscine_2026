/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_test_explanation.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:15:24 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:22:24 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declare a function called ft_strlowcase that returns a pointer to a char and accepts a pointer to a char as argument. 
char	*ft_strlowcase(char *str) // STRING ALERT!
{
	// String pattern.
	int	i;
	
	// String pattern.
	i = 0;
	// String pattern.
	while (str[i] != '\0')
	{
		// if character in the string is uppercase, than make it lowercase. Check "man ascii" in the terminal to find out why + 32 works. 
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		// String pattern.
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	randomString[] = "i love 42";

	printf("%s\n", ft_strlowcase(randomString));
	return (0);
}