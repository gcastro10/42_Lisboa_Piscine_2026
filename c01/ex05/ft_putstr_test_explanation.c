/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_test_explanation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:27:13 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 19:49:09 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// okay okay let me explain. 
// first lets start with what we know:
// we declare/define a function called ft_putstr that returns "void" and accepts an argument. Now this is mind blowing, but in C, there is actually no type for a string. I know crazy right, pretty much every other language has string as a type but not C, here a string is a pointer to a char. And that is the argument that this function accepts. Theres a lot to unpack here so bare with me. 
void	ft_putstr(char *str)
{
	// first I'd like to say that there are two ways of doing this, by using a counter, or by using pointer arithmetic. I'm going to show you my preferred way of doing this specially as a beginner which is with a counter. 
	// we declare a variable called i, of type int. 
	int	i;

	// we initiliaze this variable i to equal 0. 
	i = 0;
	// essentially a string, is a collection of characters from the ascii table. the pointer to a char, points to the memory address of the first character in the string. Since strings are zero-indexed, this means that the first character in the string is actually at position 0. This is why we set the counter i  to 0 and not to 1. 
	// so in this while loop, we are saying the str address at position i, if it does not equal '\0' then the loop continues. This '\0' is a sentinel value, that stands for the NUL terminator. This value is at the end of every single string. This is the only way the computer can know that the string has reached the end. So you're essentially saying while str[i] does not reach the end of the string, keep iterating (moving to the next slot/position).
	while (str[i] != '\0')
	{
		// write the character in that str position. 
		ft_putchar(str[i]);
		// increment the i, to move to the next character in the string.
		i++;
	}
}

// Important considerations:
// This works exactly the same as the one above.
void	ft_putstr2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
// Important considerations:
// This works exactly the same as the one above. Going forward this will be the last time I'll do pointer arithmetic to iterate a string. 
void	ft_putstr_arithmetic(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

// When testing strings, there are two versions, read-only if you defined them as string literals, which you're only able to read and do nothing more. Then there are writeable. 
// Below is a writeable example. for this exercise we just need to read, meaning doing this version is unecessary. But this will be required in future exercises.
int	main(void)
{
	char	string[] = "Hello, World!\n";
	
	ft_putstr(string);
	return (0);
}
// Below is a read-only example
int	main2(void)
{
	ft_putstr("Hello, World!\n");
	return (0);
}