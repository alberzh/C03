/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 11:32:44 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/29 13:02:51 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendest;
	unsigned int	lensrc;
	unsigned int	i;

	lendest = 0;
	lensrc = 0;
	while (dest[lendest])
		lendest++;
	while (src[lensrc])
		lensrc++;
	if (size <= lendest)
		return (size + lensrc);
	i = 0;
	while (src[i] && (lendest + i + 1 < size))
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = 0;
	return (lendest + lensrc);
}

/* #include <stdio.h>

int	main(void)
{
	char dest1[50] = "Hello ";
	char src[] = "World!";
	unsigned int result1;

	result1 = ft_strlcat(dest1, src, 50);
	printf("ft_strlcat result: %u\n", result1);
	printf("Final dest: '%s'\n\n", dest1);

	return (0);
} */