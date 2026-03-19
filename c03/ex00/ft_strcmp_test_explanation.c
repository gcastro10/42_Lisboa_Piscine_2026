/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_test_explanation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:20:25 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:29:13 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2) // STRING ALERT!
{
	// String pattern
	int	i;
	
	// String pattern
	i = 0;
	// String pattern && we add a second condition, since we are comparing 2 strings, we want the loop to continue whilst they are the same and stop when they are no longer the same char in the same position.
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		// String pattern
		i++;
	}
	// When we put (type) before a variable, we are type casting. Essentially converting that variable into a type we choose. 
	// unsigned char means that the character has to be positive, for 42 purposes this is unecessary but nice to understand. You see the "man ascii" table only has 128 values, and thats the Standard. However there are extended ascii tables for characters like "ÿ". So if you want your code to work everywhere then unsigned char is necessary. Every language has its own extended ascii table, depending on their language's alphabet.
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	// if it returns 0, that means the strings are IDENTICAL. 
	// if it returns a NEGATIVE number, it means s1 comes BEFORE s2 in the dictionary. 
	// if it returns a POSITIVE number, it means s1 comes AFTER s2 in the dictionary. 
}

#include <stdio.h>
int	main(void)
{
	char	firstString[] = "apples";
	char	secondString[] = "appleton";

	printf("%i\n", ft_strcmp(firstString, secondString));
	return (0);
}