/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test_explanation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:55:49 by gonca             #+#    #+#             */
/*   Updated: 2026/03/06 15:00:12 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		len;

	len = ft_strlen(src);
	// We use (len + 1) because malloc counts in bytes, and we need space for the '\0'.
	dest = (char *)malloc(sizeof(char) * (len + 1));
	// If memory allocation fails, it returns NULL.
	if (dest == NULL)
	{
		return (NULL);
	}	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int     main(void)
{
    char    *original = "Hello, Piscine!";
    char    *duplicate;

    printf("Original String:  %s\n", original);
    printf("Original Address: %p\n", (void *)original);

    // Call your function
    duplicate = ft_strdup(original);

    if (duplicate == NULL)
    {
        printf("Malloc failed!\n");
        return (1);
    }

    printf("Duplicate String: %s\n", duplicate);
    printf("Duplicate Address:%p\n", (void *)duplicate);

    // Verification: Content should be same, addresses should be different
    if (original != duplicate)
        printf("\nSuccess: The strings are in different memory locations.\n");
    else
        printf("\nError: The addresses are the same. Not a true duplicate.\n");

    // Clean up memory
    free(duplicate);

    return (0);
}