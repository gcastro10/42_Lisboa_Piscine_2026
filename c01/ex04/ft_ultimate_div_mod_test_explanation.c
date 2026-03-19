/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod_test_explanation.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:22:28 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 19:26:19 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// you get the point.
void	ft_ultimate_div_mod(int *a, int *b)
{
	// same check as before, can't divide anything by 0 (mathematically).
	if (*b != 0)
	{
		// we need two tmp variables, because without them we would modify the result of one which would affect the second result. so we store them first and use the stored variables to do the math. 
		// you technically only need to store one result. But I think this is easier to understand. If this is easy for you, try doing it with just 1 tmp variable, its possible.
		int	tmp_a = *a;
		int	tmp_b = *b;
		*a = tmp_a / tmp_b;
		*b = tmp_a % tmp_b;
	}
}

#include <stdio.h>
int	main(void)
{
	int	n1 = 10;
	int	n2 = 2;

	ft_ultimate_div_mod(&n1, &n2);
	printf("%d\n%d\n", n1 , n2);

}