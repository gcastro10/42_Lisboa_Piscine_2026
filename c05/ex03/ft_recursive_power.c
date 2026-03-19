/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:56:15 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 16:59:07 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	// Edge Case: If power is negative, we return 0 as per instructions.
	if (power < 0)
	{
		return (0);
	}
	// Edge Case: Any number to the power of 0 is 1.
	if (power == 0)
	{
		return (1);
	}
	// Recursive step, multiply the base 'nb' by the result of the function called with 'power - 1'.
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int	main(void)
{
	printf("Recursive 2^3:  %d | Expected: 8\n", ft_recursive_power(2, 3));
	printf("Recursive 5^0:  %d | Expected: 1\n", ft_recursive_power(5, 0));
	printf("Recursive 2^-1: %d | Expected: 0\n", ft_recursive_power(2, -1));
	return (0);
}