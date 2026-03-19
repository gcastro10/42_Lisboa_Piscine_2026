/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_test_explanation.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 20:05:56 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 14:15:10 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Goal is to reverse a given array of integers.
// We declare/define a function called ft_rev_int_tab that returns "void" and accepts two arguments, first is an int array or in other words a pointer to an int. And the second argument is a regular int size, which tells us how large/big the array is, so we know where it ends. As arrays don't have a NUL terminator like strings do.
void	ft_rev_int_tab(int *tab, int size)
{
	//First we declare a counter, to iterate the array. 
	int	i;
	//Secondly we declare a temporary variable, to store a slot in the array while we do the swap. So that we don't overwrite. 
	int	tmp;

	// Initialize the counter to start at 0. Something arrays do have in common with strings is that they are also zero-indexed. So the first "slot" in the array is actually position 0. 
	i = 0;
	// We create a loop and this is where the magic happens. In the loop condition we want the loop to continue for as long as the counter "i" is smaller than size / 2. Why? Because we only want to iterate have of the array and not the whole array. Since we will be swapping the first slot, with the last, then moving to the next position swapping second with before last and so on.. If we iterated the whole array we would reverse when we reach the middle and when we continued to the end we would reset the array back to how it originally was. So we only want to go until the middle. This works perfectly if the array is oddly sized and evenly sized. If its odd, the slot in the exact middle doesn't need to me swapped, and if its even it swaps them. 
	while (i < size / 2)
	{
		// First we save the first slot of the array in tmp.
		tmp = tab[i];
		// Then we save the last slot, in the first slot. (We do size - 1 because like I said above array are zero indexed, so if size is 5, the last slot would actually be 4, because you have 0, 1, 2, 3, 4 which are 5 numbers in size.) The we do - i, because because we start at both ends and want to meet at the middle.
		tab[i] = tab[size - 1 - i];
		//then we save the first slot in last slot position - i. 
		tab[size - 1 - i] = tmp;
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	int	tab[] = {5, 4, 3, 2, 1};
	int	size = 5;
	int	i = 0;

	ft_rev_int_tab(tab, 5);
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}