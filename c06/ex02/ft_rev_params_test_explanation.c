/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params_test_explanation.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:46:25 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 17:47:24 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	// We set our boundary at 1 because we don't want to print argv[0].
	i = 1;
	// Instead of a new counter, we use argc itself to count down.
	while (argc > i)
	{
		// argc - 1, is the last argument.
		ft_putstr(argv[argc - 1]);
		ft_putchar('\n');
		argc--;
	}
	return (0);
}