/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet_test_explanation.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 15:04:45 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 16:20:19 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// You should already know this from the previous exercise. If you don't remember go back to ex00. 
#include <unistd.h>

// You should already know this from the previous exercise. If you don't remember go back to ex00. 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Okay this is new. 
// The concepts remain the same, you are defining/declaring a function called "ft_print_alphabet", which will return "void" (the one on the left, which means it will return nothing). And this function will accept "void" as the argument (it will accept nothing as the argument). 
void	ft_print_alphabet(void)
{
	// Here we are declaring/defining a variable. 
	// We are creating a variable called "letter", and setting its type to char (character). 
	char	letter;

	// Here we are initializing the variable we have just created. We are saying this variable letter will start as the character 'a'. 
	letter = 'a';
	// Now this is your first introduction to loops. "while" is a keyword that you will use often, and you use while in C, to create loops. you call while and inside the parenthesis you put the condition for that loop to continue. If the condition is true, the loop will continue until the condition becomes false.
	// In this while loop condition we are saying, for as long as the variable letter (which starts as 'a') is smaller or equal to the character 'z', then the loops continues, if not the loop stops. 
	// Reminder: Check your ascii table with "man ascii" on your terminal. On the previous exercise I gave you a hint, that the lower case alphabet is continuous as well as the Uppercase alphabet. So what we are essentially saying to the computer is that for as long as 'a' which = dec 97, is smaller or equal to 'z' which equals dec 122, the condition is true and will looping. 
	while (letter <= 'z')
	{
		// Now inside the loop which is defined by the curly bracker above, and the one after letter++, is what you want to do while that condition is true. Since we want to print the whole alphabet in lowercase, we call the ft_putchar function we created above, and pass the variable we created as the argument. Which is why it had to be of type char. After we write that letter on the screen, we will increment the letter's position by 1. So starting by the letter 'a' which again equal Dec 97, we add +1, making it 98 which is the character 'b', the condition is still true, goes inside the loop, prints the letter 'b', increments +1 again, its now Dec 99 which is the letter 'c', the condition is still true, goes inside the loop, prints the letter 'c', incremenets +1 again. You get the point, it will do this until it gets to 'z' Dec 122, the condition is still true because its smaller or equal to 'z', it prints the letter 'z', it increments to Dec 123, and now finally the condition is no longer true. Which means it stops the loop there and doesn't go inside anymore. It moves to the next line after the while loop end. 
		ft_putchar(letter);
		letter++;
	}
}

// You should already know this from the previous exercise. If you don't remember go back to ex00.
int	main(void)
{
	// Here we call the function, on contrary to the previous exercise we CANNOT include an argument here, because when we defined ft_print_alphabet we set void for the arguments. Meaning nothing as the argument. So when we call it the parenthesis are empty. If we did pass something the program wouldn't even compile.
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}

// Finally to test this in action, you will save this file. Then you will open the terminal type: "cc "name of file"". So for this example it would look like: "cc ft_print_alphabet_test_explanations.c". 
// If no errors then nothing will happen on the terminal this is usually a good thing. However you will notice on your folder (directory) that there is a new file called ./a.out. And to run the program you will simply type that program name "./a.out" and press enter. 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex01$ cc ft_print_alphabet_test_explanation.c 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex01$ ./a.out 
// abcdefghijklmnopqrstuvwxyz
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex01$ 

// Now there is also another way to achieve what we did above, with much less code.
#include <unistd.h>

void	ft_print_alphabet2(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
}

int	main2(void)
{
	ft_print_alphabet2();
	return (0);
}

// My question to you would be, are you here to learn? Or are you here to do bare minimum? Do you want to start leaning everything properly from the start, or skip this until later on which you will have to learn and will not have these fundamentals down early?