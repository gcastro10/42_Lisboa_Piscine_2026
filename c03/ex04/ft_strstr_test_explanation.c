/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_test_explanation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:50:49 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 16:19:24 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find) // STRING ALERT!
{
	// string pattern
	int	i;
	int	j;
	
	// string pattern
	i = 0;
	// check manual "Return Value" section. "If needle is the empty string, the return value is always haystack itself."
	if (!to_find)
	{
		return (str);
	}
	// string pattern
	while (str[i] != '\0')
	{
		j = 0;
		// while we are going through the main string "haystack" we create another loop to compare if the needle "to_find" matches with anything in the haystack.
		while (str[i + j] == to_find[j])
		{
			// if it finds the whole needle, then it returns the string starting at the position of the first character of the needle until the end of the string.
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		// string pattern
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char	haystack[] = "How will I find the needle in the haystack?";
	char	needle[14] = "needle";

	printf("%s\n", ft_strstr(haystack, needle));
	return (0);
}