/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial_test_explanation.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:44:08 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 17:53:41 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Goal: Calculate the factorial of a number using a loop. (This is what makes it the iterative approach). 
int	ft_iterative_factorial(int nb)
{
	int	result;

	// Edge case, factorials for negative numbers don't exist.
	if (nb < 0)
	{
		return (0);
	}
	// Edge case, 0! and 1! are both mathematically defined as 1.
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	// We want to initiliaze the result to 1, 1 * nb will = nb, whilst if we did 0 * nb it would = 0. 
	result = 1;
	// loop downwards from nb to 1. 
	while (nb > 0)
	{
		// Multiply the accumulating result by the current value of nb. 
		result = result * nb;
		// Decrement nb to move to next smaller int. 
		nb--;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	printf("Test 5!:  %d | Expected: 120\n", ft_iterative_factorial(5));
	printf("Test 0!:  %d | Expected: 1\n", ft_iterative_factorial(0));
	printf("Test -5:  %d | Expected: 0\n", ft_iterative_factorial(-5));
	printf("Test 10!: %d | Expected: 3628800\n", ft_iterative_factorial(10));
	return (0);
}