/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test_explanation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:51:11 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 15:23:10 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// We declare/define a function called ft_strcpy that returns "a pointer to a char (string)" and accepts two arguments, the first is a pointer to char (string) called dest, and the second is a pointer to a char (string) called src.
char	*ft_strcpy(char *dest, char *src)
{
	// Now, heres a tip: Coding in my opinion is about identifying patterns. You must have noticed by now, that when a function accepts a string as an argument and you want to manipulate the string in some shape way or form, you have basic template that you always need. 
	// The pattern I see: You need a counter to iterate through the string, to go from the first character to the very last. 
	int	i;

	// The pattern I see: You need to initiliaze this counter. 
	i = 0;
	// The pattern I see: You need a loop that iterates the string from start to finish.  
	while (src[i] != '\0') // Reminder that you can just have "while (str[i])"
	{
		// So this is the first "new" piece of code outside the pattern. And we are just setting the string we want to overwrite = to the str we want to copy. Character by Character.
		dest[i] = src[i];
		// The pattern I see: You need to increment the counter to go to the next position in the string. 
		i++;
	}
	// This is the second "new" piece of code outside the pattern, we have to do this because the while loop stops when the nul terminator = the nul terminator. So dest[i] is already in the position of the nul terminator but it doesn't go inside the loop to copy it. So when the loop ends we have to manually set that last position to the nul terminator so the computer knows the string ends there.
	dest[i] = '\0';
	// We return the pointer to a char dest, So we are actually returning the address of the first character in the string dest. This is an important note. You are not returning the whole string just the address of the first character. This is important because in large scale application this is what helps make your code efficient and fast. Instead of returning the whole string which could be huge, you just return the address of the first character of the string, and then when you need it you can get the whole string by iterating the string until the nul terminator. 
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	stringIWantToCopy[] = "I learned this at 42!";
	// Remember when I said there were read-only strings and writeable? Find out why I need to set 22 there. 
	char	stringImOverwriting[22] = "";

	printf("%s\n", ft_strcpy(stringImOverwriting, stringIWantToCopy));
	return (0);
}