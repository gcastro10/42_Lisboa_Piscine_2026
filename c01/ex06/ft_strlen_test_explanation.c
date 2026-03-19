/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test_explanation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:49:39 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 14:15:04 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// we declare/define a function called ft_strlen that returns an int and accepts a string as argument (a pointer to a char). 
// this is the first time I believe where we create a function that actually expects something to be returned and in this case its an int. This tells us that somewhere inside this function block we need a return and that return needs to be an int. 
int	ft_strlen(char *str)
{
	// just like for ft_putstr, we need to iterate the string we receive, and just like I recommended for the previous exercise we now require a counter for this one. 
	int	len;

	len = 0;
	// this part is basically the same as ft_putstr with the exception that we are no longer interested in writing each character on the screen so we removed the ft_putchar(str[i]), we are just interested in the counter. 
	// however, there is an important consideration here. lets say the string we want to count is just "hi". What do you think len would be? 
	// below we are saying while str[at position len] does not equal NUL terminator, the loop continues. so starting at position 0 since we now know that strings are zero-indexed and the first character in the string is in the position 0, so str[0] = h, condition is true, goes inside increments len + 1, len is now 1, so str [1] = i which != NUL terminator, condition is true goes inside, increments len + 1, so len = 2. str[2] = '\0' which != '\0' oh wait, its no longer true, so it stops. len remains at 2. The important consideration here is that when the iteration to end of string ends, i or len whatever variable name you chose (the counter) will be at the position of the NUL terminator. This is really important later on.
	while (str[len] != '\0')
	{
		len++;
	}
	// return len which = 2 for "hi". Theres two characters. 
	return (len);
}

#include <stdio.h>
int	main(void)
{
	// if you were to just call ft_strlen("hi") nothing would show up, because when a function returns something it doesn't show it on the screen. In C you would have to manually tell the computer to display it on to the screen using write or in this case below printf. 
	printf("%d\n", ft_strlen("hi"));
}