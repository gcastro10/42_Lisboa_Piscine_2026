/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test_explanation.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:29:39 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:35:29 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int	n) // STRING ALERT!
{
	// String pattern, adjusted to be able to compare with n later.
	unsigned int	i;

	// String pattern
	i = 0;
	// As per the manual, if n == 0 return 0. 
	if (n == 0)
	{
		return (0);
	}
	// String pattern adjusted to add if s1 = s2, and the character position but me smaller than the size given to us. And we do n - 1, because you guess it, strings are zero-indexed.
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		// String pattern
		i++;
	}
	// same same
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
int	main(void)
{
	char	firstString[] = "apples";
	char	secondString[] = "appleton";
	unsigned int	size = 4;

	printf("%i\n", ft_strncmp(firstString, secondString, size));
	return (0);
}