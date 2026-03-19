/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_test_explanation.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 13:52:15 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 16:20:32 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// First we must understand what #include means. As you can imagine coding languages have existed for many years, and throughout the years developers have realized there are code that we commonly require to achieve our goals. These developers over time have build a "cheat-sheet" that contains these commonly used functions, that helps us to write code faster. These developers are also usually very experienced, which means the code in these libraries are usually heavily optimized and efficient. 

#include  <unistd.h>

// Below we have two functions that we personally have created, they are named ft_putchar and main. However in the first function we created ft_putchar, we are actually using one of those commonly used functions called "write". This is why we must #include <unistd.h>, because write belongs to that library. 

// Okay so what exactly are we doing below?
// We are declaring/defining a function named "ft_putchar", this function will return "void", which in essentially means it will return nothing. Analogy: Think of the 42 food dispenser, you drop a coin in, or pay with your card, and your food of choice drops down and you pick it up, this would be a function that returns something (In this case the food dispenser accepts coins or card as arguments). On the other hand think of a mailbox, you drop a letter inside but you don't get anything in return (In this case the mailbox accepts the envelope as the argument). 

// This function ft_putchar that returns nothing, accepts as a argument, a variable called "c" (this is something developers have full control over, YOU can name your variables anything you want (however during piscine you must follow instructions carefully)), of type "char" (character (this is important as your saying that the variable you just declared has a specific type which in this case is char for character. *Developers like to write the least amount possible so get used to this)).
void	ft_putchar(char c)
{
	// Anything inside the curly bracket above, and the one after the write function, belongs only to this function we created ft_putchar. 
	// Here we are calling the write function, and if we google the library "unistd.h", and find the write function, we can actually see exactly what arguments the write function requires. Also note, that the order of these arguments is extremely important. Arguments are seperated by commas.
	// So the first argument is for "File Descriptor". 
	// The second argument is for "Buffer".
	// The third argument is for "Size"
	// Lets break this down first what is write? Imagine the write function is a postal worker. To send a package, the worker needs three specific things from you; 1. Where is it going? 2. What is inside the package? 3. How heavy is it?
	// For the File Descriptor (the first argument), you need to understand that everything in unix/linux (your operating system) is a file. And you need to tell the computer where to send the data. So you have 3 options, it can be "0" which means Standard Input (Keyboard), it can be "1" which means Standard Output (What you see on Screen), and finally "2" which means Standard Error (for errors). For your piscine experience you will only be working with "1", but I advise you to not memorize, but to understand why we always use "1" for the piscine. 
	// For the Buffer (the second argument), you need to understand that "Buffer" is just a fancy word for the place where the data is sitting. The function write doesn't want the actual value of the character, it wants to know the address (the location in the memory) where that character is being stored. And when we use the ampersend "&", its like a GPS coordinate. So by typing "&c" we are actually saying go to the GPS coordinate for the variable "c".
	// For the Size (the third argument), you need to understand that the computer is literal, it needs to know exactly how many "bytes" it should read starting from that address. Since a "char" is exactly 1 byte, we tell write to only look at that 1 specific spot in memory and nothing else.  
	write(1, &c, 1);
}

// For you project submission you must not include this main function, this is for testing purposes and exactly why its not on the other file. 
// Again, as this is still fresh for you, but soon you will be a master, let me reiterate what we are doing below. 
// We are declaring a function called "main" which actually returns something since its not void, it returns an "int", which is short for integer. And integer is a whole number that can be positive, negative or zero. No decimals, No Fractions. And this function will receive "void" (nothing) as an argument.
int	main(void)
{
	// Okay what are we doing here?
	// So above, we declared/defined a function called ft_putchar. And below we are actually calling it. If we didn't create this main function and called the function above, nothing would actually happen. Its like building a house, but then never using it. When we call functions we only need there name, and to include the arguments the function was defined as. Since we defined ft_putchar(char c) then we must include an argument that is of type char. 
	// Now I did this on purpose so you can understand something early on, which will make your life easier later on. 
	// You might be thinking "4" is a number, how can we pass a number as the type character?
	// First I would like to show you something. Please open your terminal, and type "man ascii" (no quotes), then press enter. I know, its a lot. No! You don't need to memorize this table. You can always access this table by going to your terminal and typing "man ascii". However you need to understand what is happening here. 
	// To get you started, what matters to you right now is the "Dec" column which stands for Decimal Value. and the "Char" column which stands for Character. If you go through Dec 0 - Dec 127, you will realize that you don't have all the numbers in the world, you only have digits ranging from 0 - 9. This means that if you ever need to print a number bigger than 9, you would have to print them 1 by 1, using the avaialble character digits we have from 0 - 9. 
	// Therefore in C, the character '4' is not the value 4. It is a 'picture' of the number 4. To the computer '4' is actually the decimal value 52 on your ascii. When we use single quotes we are telling the computer don't use the math value, use the character symbol from the table. 
	ft_putchar('4');
	ft_putchar('2');
	ft_putchar(' ');
	// And you also have the alphabet in Uppercase (which is continuous btw), and then you have the alphabet in Lowercase (which is also continuous btw). 
	ft_putchar('P');
	ft_putchar('i');
	ft_putchar('s');
	ft_putchar('c');
	ft_putchar('i');
	ft_putchar('n');
	ft_putchar('e');
	// Here quick test, try to find the \n character in the ascii table and figure out what it does. Okay of course I'm not going to leave you hanging. You can find it in Dec 10, which stands for Line Feed, and the '\n' is 1 single character, which tells the terminal to move the cursor to the start of the next line. 
	ft_putchar('\n');
	// We return "0" which is not mandatory but good practice, this lets the application know that it ran successfully. 
	return (0);
}

// Finally to test this in action, you will save this file. Then you will open the terminal type: "cc "name of file"". So for this example it would look like: "cc ft_putchar_test_explanations.c". 
// If no errors then nothing will happen on the terminal this is usually a good thing. However you will notice on your folder (directory) that there is a new file called ./a.out. And to run the program you will simply type that program name "./a.out" and press enter. 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex00$ cc ft_putchar_test_explanation.c 
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex00$ ./a.out 
// 42 Piscine
// gonca@student:~/42_Lisboa_Piscine_2026/c00/ex00$ 