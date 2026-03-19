/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci_test_explanation.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:59:39 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 17:01:31 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	// Edge Case: The subject specifically asks for -1 if index is negative.
	if (index < 0)
	{
		return (-1);
	}
	// Edge Case: The sequence starts at 0.
	if (index == 0)
	{
		return (0);
	}
	// Edge Case: The second element is 1.
	if (index == 1)
	{
		return (1);
	}
	// Recursive step, the sum of the two previous elements.
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>
int	main(void)
{
	printf("Index 0:  %d | Expected: 0\n", ft_fibonacci(0));
	printf("Index 1:  %d | Expected: 1\n", ft_fibonacci(1));
	printf("Index 5:  %d | Expected: 5\n", ft_fibonacci(5));
	printf("Index 8:  %d | Expected: 21\n", ft_fibonacci(8));
	printf("Index -1: %d | Expected: -1\n", ft_fibonacci(-1));
	return (0);
}