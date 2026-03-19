/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_test_explanation.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:16:46 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 17:58:38 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// We declare/define a function called ft_print_comb2, that returns "void" and accepts "void" as argument.
void	ft_print_comb2(void)
{
	// We declare two variables, name n1 and n2, both of type integer.
	int	n1;
	int	n2;

	// We initialize n1 to 0, as an integer.
	n1 = 0;
	// We create the first loop, while n1 is smaller than or equal to 98 the loop continues, if not it stops. Why 98? because the largest possible number that the first 2 digits can have as part of the exercise as seen on the example.
	while (n1 <= 98)
	{
		// We initialize the second number n2 to be equal to n1 + 1. Just like the example, it excepts 00 for n1 and 01 for n2 to give us 00 01. 
		n2 = n1 + 1;
		// We create a second loop, while n2 is smaller than or equal to the integer 99 the loop continues.
		while (n2 <= 99)
		{
			// Okay understanding this will be the key for good grades on exams. 
			// as we know already ft_putchar accepts a char (character). However we have been working with int (integer). So we can't just pass in n1. We have to convert n1 into a character. Since there are only 2 digits that keeps it fairly simple for us. To convert the left digit of the integer, we divide by 10. Why? Lets see an example. Lets say n1 is 20. If you do n1 / 10 we are doing 20/10, what does that give us? 2! Which is the left digit of the integer 20. So n1/10 in this case gives us 2, however its still an integer. But now if we check the ascii table, we don't have a char for 20, but we do for 2. So we do 2 + '0', to point to the character '2'. Now that its a char, ft_putchar accepts it and prints '2' on the terminal/screen.
			ft_putchar(n1 / 10 + '0');
			// We've just converted the first digit of the integer and in our example n1 = 20. So now that we got 2 out of the way, we need to find a way to print 0. This is where the % operator comes in handy. The % operator mathematically helps us find the "remainder" or better "mod". What we are doing when we use % is diving n1 by 10 just like we did above, 20/10 = 2, however since we used % instead of / for division, we don't care about the result itself, we care that about the remainder. In this case when we divide 20/10, there is no remainder, 10 fits into 20 perfectly twice. So the remainder is 0. The only thing left to do is to convert the 0 integer into a character, and just like above to do that we add '0' to do so.
			ft_putchar(n1 % 10 + '0');
			// This should be self-explanatory by now.
			ft_putchar(' ');
			// This is exactly the same as we did above with n1, however previously I set n1 = 20. So the remainder was 0, but perhaps that example was not enough for your to fully grasp the concept. So I will use this to explain it again, but I will set n2 = 32. 
			// Firstly 32 / 10 = 3.2, But we've already n1 and n2 are of type int (integer) in one of the previous exercises I said that integers are whole numbers that can positive, negative or zero. And then I said, No Decimals, No Fractions. This means that the computer ignores everything after "3". So the result of 32/10 = 3 for the computer in this case using int as the variable type. So we just need to convert 3 into a character by adding the character '0'. 
			ft_putchar(n2 / 10 + '0');
			// Now since n2 = 32 we should have a remainder like we saw above. 32 / 10 = 3.2, that means there is a remainder of 2. So the result of 32 % 10 = 2. Now that we got the int 2, we must convert it into a character. We do this by adding the character '0'. And just be completely clear, when we are adding the character '0', for example for this case, the result of the remainder is 2, so we are actually doing 2 + 48 (the dec value of the '0') = 50 Dec value which is equivalent to the character '2'.
			ft_putchar(n2 % 10 + '0');
			if (n1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	ft_putchar('\n');
	return (0);
}

// Hopefully by now you know how to compile your code and run the program. If not, ask the swimmer next to you. 