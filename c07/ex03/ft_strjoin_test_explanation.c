/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_test_explanation.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:08:39 by gonca             #+#    #+#             */
/*   Updated: 2026/03/19 19:49:43 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// The "normal" ft_strcpy returns the start of the string, the difference here is that we want to return the end of the string. So that we don't overwrite the previous string, but instead start where it finishes. 
// Instead you could do ft_strcat, for example. Since we are "linking" strings. However that is actually not very efficient as you have to scan for every string. So if there are many strings its very taxing. Research more on that if you're interested.
char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest + i);
}

// We need to create a function to know the exact number of bytes we are going to need when we call malloc. So we are "summing" up (is that a word?), adding up the length of every string in "strs", and it adds the length of "sep" but only if there is another string coming after it. 
int	get_total_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			len += ft_strlen(sep);
		}
		i++;
	}
	return (len);
}

// First we do a quick check if size is "0" then return an empty string. 
// We call malloc using the total length. 
// Do the malloc check, to make sure malloc worked. (There was enough memory to be allocated)
// Then we copy the first string, and keep iterating the pointer forward to finish copying all strings. As we reach the end of a string we copy the seperator except for the last one. 
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*ptr;
	int		i;

	if (size == 0)
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	res = malloc(sizeof(char) * (get_total_len(size, strs, sep) + 1));
	if (!res)
	{
		return (NULL);
	}
	ptr = res;
	i = 0;
	while (i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		if (i < size - 1)
		{
			ptr = ft_strcpy(ptr, sep);
		}
		i++;
	}
	// this line below is technically not necessary since we already add it at the end of each ft_strcpy. however, it doesn't hurt, and its called "defensive programming". No memory leaks on my watch. 
	*ptr = '\0';
	return (res);
}

#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"Hello", "Piscine", "2026", "Success"};
	char	*separator = " -- ";
	char	*result;

	result = ft_strjoin(4, strs, separator);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}