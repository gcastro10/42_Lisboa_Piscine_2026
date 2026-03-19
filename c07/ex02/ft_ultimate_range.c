/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:00:54 by gonca             #+#    #+#             */
/*   Updated: 2026/03/06 15:04:37 by gonca            ###   ########.fr       */
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
	buffer = (int *)malloc(sizeof(int) * size);
	if (buffer == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		buffer[i] = min + i;
		i++;
	}
	*range = buffer;
	return (size);
}