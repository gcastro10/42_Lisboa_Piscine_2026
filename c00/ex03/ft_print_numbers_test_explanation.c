/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers_test_explanation.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:16:36 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 16:24:38 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Same principles as before, we are declaring/defining a function called ft_print_numbers that will return "void" (return nothing) and accepts "void" as arguments (accepts nothing as argument).
void	ft_print_numbers(void)
{
	// Again same principle as before, we are declaring a variable called "n" which is of type char. Why char if its a number? Because we want to print this to the terminal (screen), and to do that we can only print using characters. You can actually test this with type int, and it would still work. In C, a char is basically just a very small int (usually 8 bits). When you pass an int to ft_putchar, the compiler just takes the last 8 bits of that integer and treats it as a character. As long as the value is between 0 and 127, it maps perfectly to the ASCII table. However use Char when you mean "symbol" and use int when you mean "math".
	char	n;

	// Again same principle, we are initializing the variable we created above called "n" to be character '0'. Meaning n starts at '0'.
	n = '0';
	// Again same principle, we create a while loop, while the condition is true the loop continues until the condition is false then stops. We are saying while "n" which starts at '0' which = Dec 48 is smaller or equal to the character '9' which = Dec 57 the loop continues.
	while (n <= '9')
	{
		// We write "n" on the screen/terminal.
		ft_putchar(n);
		// We increment n + 1, to move to the next character.
		n++;
	}
}

int	main(void)
{
	// we call the function with no arguments. 
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}

// Finally to test this in action, you will save this file. Then you will open the terminal type: "cc "name of file"". So for this example it would look like: "cc ft_print_numbers_test_explanations.c". 
// If no errors then nothing will happen on the terminal this is usually a good thing. However you will notice on your folder (directory) that there is a new file called ./a.out. And to run the program you will simply type that program name "./a.out" and press enter. 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex03$ cc ft_print_numbers_test_explanation.c 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex03$ ./a.out 
// 0123456789
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex03$ 