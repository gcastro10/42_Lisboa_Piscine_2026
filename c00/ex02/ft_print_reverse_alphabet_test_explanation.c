/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet_test_explanation.        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:36:32 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 16:20:12 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// We are declaring/defining a function called ft_print_reverse_alphabet that will return nothing, and accepts nothing as an argument. 
void	ft_print_reverse_alphabet(void)
{
	// We declare/define a variable called letter, that is of type char (character).
	char	letter;

	// We initialize this variable letter, to start at the character 'z' which equals to Dec 122.
	letter = 'z';
	// We create a while loop, where the condition for this loop to continue is inside the parenthesis. We are saying that while the letter which starts at 'z' which = Dec 122 is greater or equal to the character 'a' which = to Dec 97, the loop will continue. 
	// Reminder: Check your ascii table, with "man ascii" in your terminal.
	while (letter >= 'a')
	{
		// here we write the letter on to the terminal.
		ft_putchar(letter);
		// here we decrement that letter with -1, right after printing. Note: we increment after printing and not before. 
		letter--;
	}
}

int	main(void)
{
	// we call the function with no arguments. 
	ft_print_reverse_alphabet();
	ft_putchar('\n');
	return (0);
}

// Finally to test this in action, you will save this file. Then you will open the terminal type: "cc "name of file"". So for this example it would look like: "cc ft_print_reverse_alphabet_test_explanations.c". 
// If no errors then nothing will happen on the terminal this is usually a good thing. However you will notice on your folder (directory) that there is a new file called ./a.out. And to run the program you will simply type that program name "./a.out" and press enter. 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex02$ cc ft_print_reverse_alphabet_test_explanation.c 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex02$ ./a.out 
// abcdefghijklmnopqrstuvwxyz
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex02$ 
