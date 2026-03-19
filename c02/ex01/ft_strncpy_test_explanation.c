/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_test_explanation.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 14:11:21 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:23:13 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// We declare/define a function called ft_strncpy that returns "a pointer to a char (string)" and accepts three arguments, first is a pointer to char (string) called dest, second is a pointer to a char (string) called src, and third is an "unsigned int" called n. And unsigned int is an integer that can only be positive. 
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	// Our counter to iterate the string has to be unsigned int because later we have to compare the counter with n from the third argument. You can't compare apples with oranges only apples with apples. 
	unsigned int	i;

	i = 0;
	// We want to keep copying for as long as "i" is smaller than the size given to us "n".
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	// If we get here its because the loop above finished, so we either got to the end of the string (nul terminator) or i is equal to n. 
	// If we reached the end of the string an "i" is still smaller than "n" then we will fill the remaining space with null terminators as per "man strncpy". 
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	stringIWantToCopy[] = "I learned this at 42!";
	// Remember when I said there were read-only strings and writeable? Find out why I need to set 22 there. 
	// Im putting hashtags because null terminators are invisible to us, unless we displayed them as integer where we see a 0.
	char	stringImOverwriting[22] = "#####################";
	unsigned int	size = 10;

	ft_strncpy(stringImOverwriting, stringIWantToCopy, size);
	printf("%s\n", stringImOverwriting);
	return (0);
}