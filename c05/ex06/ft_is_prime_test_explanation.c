/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime_test_explanation.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:06:36 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 17:14:26 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Goal: Returns 1 if nb is prime, 0 otherwise.
int	ft_is_prime(int nb)
{
	int	i;

	// Any number less than 2 (0, 1, negatives) is not prime.
	if (nb < 2)
	{
		return (0);
	}
	i = 2;
	while (i * i <= nb)
	{
		// If it divides perfectly, it's not prime.
		if (nb % i == 0)
			return (0);
		i++;
	}
	// If the loop finished without finding a divisor, it's prime.
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("Is 2 prime?  %d | Expected: 1\n", ft_is_prime(2));
	printf("Is 4 prime?  %d | Expected: 0\n", ft_is_prime(4));
	printf("Is 13 prime? %d | Expected: 1\n", ft_is_prime(13));
	printf("Is 15 prime? %d | Expected: 0\n", ft_is_prime(15));
	printf("Is 97 prime? %d | Expected: 1\n", ft_is_prime(97));
	return (0);
}