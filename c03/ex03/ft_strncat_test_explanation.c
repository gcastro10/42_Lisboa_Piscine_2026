/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_test_explanation.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:44:06 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:50:52 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// we add the size, so we know how much to link/connect/concatenate.
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	// string pattern
	// same but adjusted because we will need to compare these value to nb, which is unsigned int. Remember apples with apples. 
	unsigned int	i;
	unsigned int	len;
	
	// string pattern
	// same
	i = 0;
	len = 0;
	// ft_strlen
	while (dest[len] != '\0')
	{
		len++;
	}
	// string pattern, just like previous exercises we want i to be less than nb. Why don't we do nb - 1 here? Check the man!
	while (src[i] != '\0' && i < nb)
	{
		dest[len + i] = src[i];
		// string pattern
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	destination[] = "Hello";
	char	source[14] = " World!";
	unsigned int	size = 9;

	printf("%s\n", ft_strncat(destination, source, size));
	return (0);
}