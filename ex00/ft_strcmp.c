/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:11:42 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/28 14:07:31 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>

int	main(void)
{
	char *str1 = "Hello";
	char *str2 = "Hello";
	char *str3 = "World";
	char *str4 = "Hell";
	char *str5 = "";
	char *str6 = "";
    char *str7 = "Hello, World!";

	printf("Comparando '%s' y '%s': %i\n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparando '%s' y '%s': %i\n", str1, str3, ft_strcmp(str1, str3));
	printf("Comparando '%s' y '%s': %i\n", str3, str1, ft_strcmp(str3, str1));
	printf("Comparando '%s' y '%s': %i\n", str1, str4, ft_strcmp(str1, str4));
	printf("Comparando '%s' y '%s': %i\n", str4, str1, ft_strcmp(str4, str1));
	printf("Comparando '%s' y '%s': %i\n", str5, str6, ft_strcmp(str5, str6));
	printf("Comparando '%s' y '%s': %i\n", str1, str5, ft_strcmp(str1, str5));
    printf("Comparando '%s' y '%s': %i\n", str1, str7, ft_strcmp(str1, str7));
    printf("Comparando '%s' y '%s': %i\n", str7, str1, ft_strcmp(str7, str1));

	return (0);
} */