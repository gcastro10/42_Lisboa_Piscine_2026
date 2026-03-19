/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative_test_explanation.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:21:27 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 16:43:52 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// We declare/define a function called ft_is_negative that returns "void" and accepts as an argument a variable called "nb" as type int (integer). 
void	ft_is_negative(int nb)
{
	//Previously we've worked with while loops, now we are working with if statements. These are conditionals. If the condition is true than run that piece of code, if not skip it. And here we are saying if "nb" is smaller than 0, meaning if nb is negative, then run that code block. 
	if (nb < 0)
	{
		// If nb is negative (smaller than 0) write the character 'N' on the screen/terminal.
		ft_putchar('N');
	}
	// okay the else if, first lets understand else. when we use a condition like the one above "if (nb < 0)" we are saying if nb is negative do something. But what if nb is something else than negative, we usually want to also do something. So for that we say if (nb < 0) do something else do something else. However here we want to specify a secondary condition, so we use else if (nb >= 0). so for that else if block to run, nb must be greater than or equal to 0. Using just else works as a safety net, so anything that doesn't match the first if, would be caught by the else. So you could've easily done this with just the else { ft_putchar('P')}, instead of using the else if (nb >= 0){ ft_putchar('P'); }. But I want you to also see else if in action because you'll need it in the future.
	else if (nb >= 0)
	{
		// If nb is postive (greater than or equal to 0) write the character 'P' on the screen/terminal.
		ft_putchar('P');
	}
}

// Declare the main function to be able to compile and run the program. 
int	main(void)
{
	// first we test a negative number by calling the function and passing a negative int as the argument. Notice that here we don't use the single quotes ''. Why? Because when we defined/declared the ft_is_negative function above we set the argument as type int and not of type char. So when we call the function it expects an integer value and not a character value.
	ft_is_negative(-42);
	// We just add a new line on the screen/terminal so that the number are seperated vertically. We could've also separated them with a comma horizontally. Up to you.
	ft_putchar('\n');
	// Secondly we test 0. 
	ft_is_negative(0);
	ft_putchar('\n');
	// third, the second test already checks for positive, this one was just for fun. 
	ft_is_negative(42);
	ft_putchar('\n');
}

// Finally to test this in action, you will save this file. Then you will open the terminal type: "cc "name of file"". So for this example it would look like: "cc ft_is_negative_test_explanations.c". 
// If no errors then nothing will happen on the terminal this is usually a good thing. However you will notice on your folder (directory) that there is a new file called ./a.out. And to run the program you will simply type that program name "./a.out" and press enter. 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex04$ cc ft_is_negative_test_explanation.c 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex04$ ./a.out 
// 0123456789
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex04$ 