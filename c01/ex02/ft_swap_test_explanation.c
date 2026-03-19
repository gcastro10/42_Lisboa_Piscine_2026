/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_test_explanation.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:13:43 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 19:17:27 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// We declare a function called ft_swap that returns "void" and accepts two arguments, pointer to an int called a and pointer to an int called b.
void	ft_swap(int *a, int *b)
{
	// Since the goal of this function is to swap the values of each argument. We need to declare a temporary variable, that holds the value of one so that we can store that value before swapping. If we didn't do this, we would over write one with the other and both would end up the same. 
	int	tmp;

	// Key concepts here is to understand that we are dereferencing the pointer. We are not swapping their addresses but instead we are swapping their contents. 
	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int	main(void)
{
	int	nb1 = 100;
	int	nb2 = 200;

	ft_swap(&nb1, &nb2);
	printf("%d\n%d\n", nb1 , nb2);
}