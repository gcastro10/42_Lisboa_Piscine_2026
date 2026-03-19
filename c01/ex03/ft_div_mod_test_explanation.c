/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_test_explanation.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:18:02 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 14:46:38 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// we are declaring/defining a function called ft_div_mod that returns "void" and accepts 4 arguments, the first 2 are of type int, and the last 2 are pointers to an int. 
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	// we want to save the div of the first two arguments in the 3rd argument. and we want to save the remainder of the first two arguments in the 4th argument. 
	// mathematically we can't divide anything by 0, so I made this conditional check for that exactly. 
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

#include <stdio.h>
int	main(void)
{
	int	n1 = 10;
	int	n2 = 2;
	int	division = 0;
	int	remainder = 0;

	ft_div_mod(n1, n2, &division, &remainder);
	printf("%d\n%d\n", division, remainder);
}