/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_test_explanation.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:53:47 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 16:56:04 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Goal: Calculates the value of nb raised to the power of 'power' using a loop.
int	ft_iterative_power(int nb, int power)
{
	int	res;

	// Edge Case: Negative powers result in 0 for integer-only functions
	if (power < 0)
	{
		return (0);
	}
	// Edge Case: By mathematical convention any number to the power of 0 is 1
	if (power == 0)
	{
		return (1);
	}
	res = 1;
	// Loop until we've multiplied 'nb' by itself 'power' times.
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

#include <stdio.h>
int	main(void)
{
	printf("Test 2^3:  %d | Expected: 8\n", ft_iterative_power(2, 3));
	printf("Test 5^0:  %d | Expected: 1\n", ft_iterative_power(5, 0));
	printf("Test 0^0:  %d | Expected: 1\n", ft_iterative_power(0, 0));
	printf("Test 2^-1: %d | Expected: 0\n", ft_iterative_power(2, -1));
	printf("Test -2^3: %d | Expected: -8\n", ft_iterative_power(-2, 3));
	return (0);
}