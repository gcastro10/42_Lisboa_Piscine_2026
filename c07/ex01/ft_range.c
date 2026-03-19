/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 14:49:20 by gonca             #+#    #+#             */
/*   Updated: 2026/03/06 15:01:00 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}