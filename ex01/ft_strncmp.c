/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:54:54 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/28 14:29:29 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>

int	main(void)
{
	char *str1 = "World";
	char *str2 = "Hello, World!";

	printf("Comparando '%s' con '%s' las primeras 3 posiciones: %i\n", str1,
		str2,
		ft_strncmp(str1, str2, 3));
	return (0);
} */