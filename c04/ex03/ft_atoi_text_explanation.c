/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_text_explanation.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 16:17:17 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 16:26:49 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// IMPORTANT NOTE: this atoi is not a copy of the "man atoi", that already exists. The difference is in how we handle signs. If I were you, I would learn both. 
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	// first we skip any potential whitespace, which was defined in the exercise "as determined by isspace(3)" so  google it, check the manual with "man isspace".
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	// count the signs, unlike atoi, we handle multiple signs here.
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	// as long as the character is a digit the loop continues. 
	while (str[i] >= '0' && str[i] <= '9')
	{
		// we convert each character digit into an integer. 
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	// return the accumulated number multiplied by the final sign. 
	return (res * sign);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "    ---+--+1234ab567";
	char	str2[] = " \n \t \r  42";
	char	str3[] = "0";
	char	str4[] = "  --2147483647"; // Testing near max int

	printf("Test 1 (Complex Signs): %d | Expected: -1234\n", ft_atoi(str1));
	printf("Test 2 (Whitespaces):   %d | Expected: 42\n", ft_atoi(str2));
	printf("Test 3 (Zero):          %d | Expected: 0\n", ft_atoi(str3));
	printf("Test 4 (Positive):      %d | Expected: 2147483647\n", ft_atoi(str4));

	return (0);
}