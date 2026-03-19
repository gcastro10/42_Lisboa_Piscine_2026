/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range_test_explanation.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:00:52 by gonca             #+#    #+#             */
/*   Updated: 2026/03/06 15:07:40 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*buffer; // This is our temporary pointer
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	// Allocate to the buffer first
	buffer = (int *)malloc(sizeof(int) * size);
	// If it fails, we don't touch *range at all
	if (buffer == NULL)
	{
		return (-1);
	}
	// Fill the buffer array.
	i = 0;
	while (i < size)
	{
		buffer[i] = min + i;
		i++;
	}
	// Finally, assign the address to the double pointer
	*range = buffer;
	return (size);
}

#include <stdio.h>
int	main(void)
{
	int	*arr;
	int	size;
	int	i = 0;

	size = ft_ultimate_range(&arr, 10, 15);
	
	printf("Size: %d\n", size);
	while (i < size)
	{
		printf("%d ", arr[i++]);
	}
	printf("\n");
	free(arr);
	return (0);
}