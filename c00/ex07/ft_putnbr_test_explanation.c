/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_test_explanation.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:59:25 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 18:31:33 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// We declare/define a function called ft_putnbr that return "void" and accepts as argument an "int" which we called nb. 
void	ft_putnbr(int nb)
{
	//This exercise teaches us many things. I've done my best on the previous exercises to be extremely thorough with my explanations, so that exercises like these become less scary.
	// First thing it teaches us is the limit of the type int (integer). Most computer systems now adays run at 32 bit operating systems, some more advanced at 64 bit, and they are developing even higher 128 bit. When you build an application, usually you want to accomodate to the majority of the population and not to a minority. As a developer you want your "app" to be accessible by as many people as possible. Since 32 bit systems are the most common, thats what developers focus on. What does this mean? I'm sure you've heard of gigabytes, megabytes, but we have been working since ft_putchar with bytes. A single byte; 1 byte, is = to 8 bits. Bits are a combination of 0's and 1's, the binary language the computer speaks. An int for majority of the cases is 4 bytes, which makes it 32bit (4 bytes * 8 bits each). If you get your calculator you can do the math with me if you do "2^32" that = "4,294,967,296". Now you might think, so the maximum possible int is "4,294,967,296", but you would be wrong. Why? Because like I've said previously an int is a whole number that can be positive, negative or zero. That means that the computer needs to save half of "4,294,967,296" as positive and the other half as negative. And obviously leave space for zero. So to find the MIN_INT = 4,294,967,296 / 2 = 2147483648. Which would be the biggest negative int the computer can accept "-2147483648". The MAX_INT = (4,294,967,296 / 2) - 1= 2147483647 because you guessed it 0. 
	// So what we are doing here is we are checking with a if condition, that if nb is equal to -2147483648, then we first want to write the negative char '-', then the char '2', then we use recursiveness to write out the rest of the integer "147483648" char by char.
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		//this is the first time we use recusiveness, this is when we use the same function within itself. honestly the best way to visualize this is by using the vscode debugger. As it will show you how the call stacks work.
		ft_putnbr(147483648);
		// we must return here, so that when its done write "-2147483648" the function stops. If we don't do this, then nb still equals "-2147483648" which is less than 0, enter the if block below. it would write another '-' make the nb, positive, which then would enter the if block below and since 2147483648 is larger than 2147483647 (the MAX_INT) it would overflow into memory you do not own, causing severe memory leak. Which is a way hackers use to break into your apps.
		return ;
	}
	// if nb is not "-2147483648" but is still below 0 so "-2147483647" or higher. Then the condition is true and goes inside the if block.
	if (nb < 0)
	{
		// it write the '-' character on the terminal/screen. 
		ft_putchar('-');
		// after printing the sign you can make nb positive. So that it passes on to the next if block. 
		nb = nb * -1;
	}
	// if nb is postive and is higher than 9, than we want it to go inside this if block.
	if (nb > 9)
	{
		// just like the print comb exercises we already know we only have characters from '0' -'9' in the ascii table, so we can't just write 123, we have to print 1 first, then 2, then 3. and we also need to convert each int into a character to print them. 
		ft_putnbr(nb / 10);
	}
	// if the nb is between '0' and '9' we can print it.
	ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
}