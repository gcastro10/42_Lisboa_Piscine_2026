/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime_test_explanation.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:14:11 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 17:18:58 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Same as previous exercise.
int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
	{
		return (0);
	}
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	// If nb is less than 2, the next prime is always 2.
	if (nb <= 2)
	{
		return (2);
	}
	// While the current number is not prime, keep incrementing.
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	// Once the loop breaks, nb is guaranteed to be prime.
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	printf("Next prime of 13: %d | Expected: 13\n", ft_find_next_prime(13));
	printf("Next prime of 14: %d | Expected: 17\n", ft_find_next_prime(14));
	printf("Next prime of 90: %d | Expected: 97\n", ft_find_next_prime(90));
	printf("Next prime of 0:  %d | Expected: 2\n", ft_find_next_prime(0));
	return (0);
}