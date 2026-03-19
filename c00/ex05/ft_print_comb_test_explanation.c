/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_test_explanation.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:45:22 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 17:15:23 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
// We declare/define a function called ft_print_comb that returns "void" and accepts "void" as an argument. 
void	ft_print_comb(void)
{
	// We declare 3 variables a, b, c, all three of type char.
	char	a;
	char	b;
	char	c;

	// We initialize variable a to the character '0'.
	a = '0';
	// We create our first loop. While a is smaller than or equal to 7 the loop continues. Why 7? Because the exercise asks to display all unique combination of 3 digits, which means the final 3 digits will be "789" as seen on the example. So a the first digit can never be 8 or 9. 
	while (a <= '7')
	{
		// then inside the first loop we initialize b to be the character a which starts at '0' + 1, so we never have 00, and we get 01, as the first two digit combination. 
		b = a + 1;
		// We create the second loop inside the first loop, which means this is a "nested" loop. While b which is a + 1, is smaller than or equal to 8. Same explanation as before, b, can never be 9, as seen on the last example. 
		while (b <= '8')
		{
			// We initialize c to be the character b + 1, so that we can get the first 3 digit combination of 012, as per the example.
			c = b + 1;
			// We create third loop inside the second and first loop, again "nested" loop. C can't be higher than 9 as per our ascii table, digits characters only go from 0-9. And we also want 9 to be the last digit as per the example.
			while (c <= '9')
			{
				// if all conditions are true, until the third loop, then we write, 'a''b''c'. 
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				// now as per the example, we want to seperate the 3 digit combinations with a comma and then a space. However for the very last one we don't. So we do a condition, if a does not equal '7' then print a comma and a space. if a = '7', then don't print the comma and the space.
				if (a != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				// We increment c + 1. Note: we do this inside the 3rd loop.
				c++;
			}
			// We increment b + 1. Note: we do this inside the 2rd loop.
			b++;
		}
		// We increment a + 1. Note: we do this inside the first loop.
		a++;
	}
}
// Now as you can perhaps notice, this code doesn't match the previous file. Why? Because the norminette only allows for 25 lines per function, and this code is 27 lines I believe. Which means it does not pass the norminette. However I want to explain this first because its the most intuitive. Now I will explain the difference to the other.
// void	ft_print_comb(void)
// {
// 	char	a;
// 	char	b;
// 	char	c;

// 	a = '0' - 1;
// 	What we are doing here with ++a, is we are incrementing BEFORE the loop starts. Since we initialize a to '0' - 1, if you check the ascii table '0' - 1 does not = to "-1". A would actually be pointing to "/". So we increment a before the loop starts so that when it does start, it starts at '0'. Which we do want. 
// 	while (++a <= '7')
// 	{
// 		b = a;
//	The same logic applies to b. instead of having b = a + 1, we just have b = a, and then we make sure we increment b, BEFORE the second loop starts.
// 		while (++b <= '8')
// 		{
// 			c = b;
// 	The same logic applies to b. instead of having c = b + 1, we just have c = b, and then we make sure we increment c, BEFORE the third loop starts.
// 			while (++c <= '9')
// 			{
// 				ft_putchar(a);
// 				ft_putchar(b);
// 				ft_putchar(c);
// 				if (a != '7')
// 				{
// 					ft_putchar(',');
// 					ft_putchar(' ');
// 				}
// 			}
// 		}
// 	}
// }
// Another way we could've shortened the amount of lines, would be to use write instead of ft_putchar. But once again, I ask you, are you here to learn or to do the bare minimum?

int	main(void)
{
	ft_print_comb();
	ft_putchar('\n');
	return (0);
}

// Finally to test this in action, you will save this file. Then you will open the terminal type: "cc "name of file"". So for this example it would look like: "cc ft_print_comb_test_explanations.c". 
// If no errors then nothing will happen on the terminal this is usually a good thing. However you will notice on your folder (directory) that there is a new file called ./a.out. And to run the program you will simply type that program name "./a.out" and press enter. 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex04$ cc ft_print_comb_test_explanation.c 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex04$ ./a.out 
// 0123456789
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex04$ 