/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_test_explanation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:36:09 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:43:22 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src) // STRING ALERT!
{
	// String pattern
	int	i;
	// In the manual "man strcat" we are concatenating two strings together, or in other words linking/connecting two strings into 1 long string. 
	// To be able to add the second string to the first one without overwriting anything from the first string, we must finds its length. So we know where to start copying into. 
	// So we create a counter for len, which stands for the length of a string. 
	int len;
	
	// String pattern
	i = 0;
	// We initialize len to 0. So it starts counting from the first character on the string. 
	len = 0;
	// We basically do a ft_strlen for dest, which is the destination string that will contain both strings. So we find out where to start copying the second one. 
	while (dest[len] != '\0')
	{
		len++;
	}
	// String pattern
	while (src[i] != '\0')
	{
		// once we know where to start copying, we start copying :D
		dest[len + i] = src[i];
		// String pattern
		i++;
	}
	// just like in previous exercises, we need to make sure we manually add the nul terminator so the computer knows where the string ends.
	dest[len + i] = '\0';
	// we return the pointer to a char, the memory address of the first character of the string dest.
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	destination[] = "Hello";
	char	source[14] = " World!";

	printf("%s\n", ft_strcat(destination, source));
	return (0);
}