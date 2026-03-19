/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonca <gonca@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:08:37 by gonca             #+#    #+#             */
/*   Updated: 2026/03/06 15:10:53 by gonca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest + i);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			len += ft_strlen(sep);
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	char	*ptr;
	int		i;

	if (size == 0)
	{
		res = malloc(1);
		res[0] = '\0';
		return (res);
	}
	res = malloc(sizeof(char) * (get_total_len(size, strs, sep) + 1));
	if (!res)
		return (NULL);
	ptr = res;
	i = 0;
	while (i < size)
	{
		ptr = ft_strcpy(ptr, strs[i]);
		if (i < size - 1)
			ptr = ft_strcpy(ptr, sep);
		i++;
	}
	*ptr = '\0';
	return (res);
}
