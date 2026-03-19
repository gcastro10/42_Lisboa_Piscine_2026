/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test_explanation.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:59:16 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 16:19:25 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;

	i = 0;
	d_len = 0;
	s_len = 0;
	// ft_strlen find length of dest without going past size. Also because of the norminette 25 lines per function, I used a trick to save lines, by removing the brackets for 1 line blocks. I've added them here to make it easier to read. 
	while (dest[d_len] != '\0' && d_len < size)
	{
		d_len++;
	}
	// ft strlen find length of src.
	while (src[s_len] != '\0')
	{
		s_len++;
	}
	// if size is too small, return the "theoretical" length
	if (size <= d_len)
	{
		return (size + s_len);
	}
	// copy src to dest starting at d_len
	// and we leave room for the nul terminator at the end.
	while (src[i] && (d_len + i) < (size - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	// manually add the nul terminator at the end.
	dest[d_len + i] = '\0';
	// we return the size of both strings, and not the actual strings themselves.
	return (d_len + s_len);
}