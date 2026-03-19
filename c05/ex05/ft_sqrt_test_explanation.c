/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt_test_explanation.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:02:04 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 17:06:05 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	// Edge Case: Negative numbers don't have square roots, including 0: the square root of 0 is 0.
	if (nb <= 0)
	{
		return (0);
	}
	i = 1;
	// We only loop as long as i * i is less than or equal to nb.
	while (i * i <= nb)
	{
		// If we find a perfect match, we return the root.
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	// If the loop finishes without finding a perfect square, return 0.
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("Sqrt 4:   %d | Expected: 2\n", ft_sqrt(4));
	printf("Sqrt 9:   %d | Expected: 3\n", ft_sqrt(9));
	printf("Sqrt 16:  %d | Expected: 4\n", ft_sqrt(16));
	printf("Sqrt 2:   %d | Expected: 0\n", ft_sqrt(2));
	printf("Sqrt 100: %d | Expected: 10\n", ft_sqrt(100));
	return (0);
}