/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range_test_explanation.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:49:17 by gonca             #+#    #+#             */
/*   Updated: 2026/03/06 15:07:12 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	// Edge Case: check if range is valid to begin with. If min is greater than or equal to max than a range is impossible.
	if (min >= max)
	{
		return (NULL);
	}
	// Find the the size of the range to be able to allocate memory. Then allocate memory with the given size.
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	// Whenever you use malloc you should check if malloc was successful. For Piscine purposes I was able to submit the exercises without this check, however this is extremely good practice and important. For real world practice, if there is not enough memory to allocate it will cause your app to crash, or worse cause a memory leak.
	if (range == NULL)
	{
		return (NULL);
	}
	// Then we just fill the array we created with the range values.
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

#include <stdio.h>
int	main(void)
{
	int	*res;
	int	min = 5;
	int	max = 10;
	int	i = 0;

	res = ft_range(min, max);
	if (!res)
	{
		return (1);
	}
	while (i < (max - min))
	{
		printf("%d ", res[i++]);
	}
	printf("\n");
	free(res);
	return (0);
}