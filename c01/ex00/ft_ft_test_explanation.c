/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_test_explanation.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 18:35:45 by gonca             #+#    #+#             */
/*   Updated: 2026/03/04 19:00:31 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// We declare a function called ft_ft that returns "void" and accept a pointer to an int as an argument. 
// Tip: If you truly want to succeed at programming with C, you must fully understand what a pointer is. Spend as much time as you need to fully understand this topic. In my opinion this is absolutely crucial and if you don't understand this you shouldn't move forward until you do. Do NOT skip this.
// What is a pointer? A pointer is the memory address. The way that got me through it was thinking of it like this. Lets say you are at home and you're organizing a party. You create a whatsapp group and invite all your friends. You write your invitation message and then you say at the end, the party is at "my" house. Odds are, majority of your friends won't know the actual address. They might know the area, but not the actual address and house number. In this analogy, the pointer is actual address of your house "5 Av. Anatole France Nº42, 75007 Paris, France". And inside that address is the content, which in our analogy is the party.

// Another analogy: Lets say you're at a hotel, that has 500 rooms, each room has a card at the door with the room number, the pointer is the keycard that can unlock that hotel room, like room 42, but the pointer doesn't know whats inside. Just unlocks the room door. 
void	ft_ft(int *nbr)
{
	//By doing *nbr, we are dereferencing the pointer. We are going inside the address to the party, or unlocking the hotel room, and setting the content inside that address or hotel room to 42.
	*nbr = 42;
}

// Starting from now on, you will be using printf to test your functions. Printf is imported from stdio.h, and is built on the write function we have been using and will keep using. It gives us more functionality than write without making us waste time with write itself.
#include <stdio.h>
int	main(void)
{
	int	n;

	n = 0;
	// to use printf, you will call it like below, first it will have a string literal "", and inside that you must have the %(then the type of variable you want to display, you can find this yourself. google it). After the string literal depending on how many variables you want to display you will add them seperate them by commas.
	printf("%d\n", n);
	// here we call the function, and as you can see we don't use *, we instead use & (ampersand), we want to send the "GPS coordinates" the "memory address" of n as the argument of ft_ft. 
	ft_ft(&n);
	printf("%d\n", n);
}