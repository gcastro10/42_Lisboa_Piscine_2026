/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:59:21 by gonca             #+#    #+#             */
/*   Updated: 2026/03/05 16:02:41 by gonca            ###   ########.fr       */
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
	while (dest[d_len] != '\0' && d_len < size)
		d_len++;
	while (src[s_len] != '\0')
		s_len++;
	if (size <= d_len)
		return (size + s_len);
	while (src[i] && (d_len + i) < (size - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}