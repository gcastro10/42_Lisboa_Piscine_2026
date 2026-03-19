/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft_test_explanation.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:01:14 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 19:13:04 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this exercise is to make sure that you fully understood what a pointer is and how it works. 
// we are declaring/defining a function called ft_ultimate_ft that returns "void" and accepts as an argument a 9level deep pointer to an int (integer).
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// going back to the hotel room analogy. think of this as follows: p9 = &p8, this means that inside the hotel room 9, there is a map inside, and that map takes you from hotel room 9 to hotel room 8. Then p8 = &p7, means that inside hotel room 8 there is a map, this map takes you from hotel room 8 to hotel room 7. etc... all the way to hotel room 1, where there is a map inside, that takes you from hotel room 1 to room n. And inside room n, there is a 0. lets change the value inside n to 42. 
// another analogy you can use. Lets say you're in a very romantic relationship and when you get home from work, your partner has left a small treasure hunt for you. At the door of your house, you have note saying check the fridge, in the fridge you have another note that says check the dining table, at the dining table you have another note that says check, etc... until you get a note that says check the bedroom, you get the point.
#include <stdio.h>
int	main(void)
{
	int	n;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;
	int	*********p9;

	n = 0;
	p1 = &n;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	ft_ultimate_ft(p9);
	printf("%d\n", n);
}