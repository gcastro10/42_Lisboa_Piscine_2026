/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial_test_explanation.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:50:28 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 16:53:14 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Goal: Calculate the factorial of a number using recursion. (This is what makes it the recursive approach (the function calls itself)). 
int	ft_recursive_factorial(int nb)
{
	// Same Edge cases as before.
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	// recursive step, multiply 'nb' by the result of the function called again with 'nb - 1'
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>
int	main(void)
{
	printf("Recursive 5!: %d | Expected: 120\n", ft_recursive_factorial(5));
	printf("Recursive 0!: %d | Expected: 1\n", ft_recursive_factorial(0));
	printf("Recursive -2: %d | Expected: 0\n", ft_recursive_factorial(-2));
	return (0);
}