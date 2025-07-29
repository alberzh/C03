/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:11:12 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/29 11:26:09 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
			{
				return (&str[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char str[50] = "Hola, ¿Qué tal? ¿Cómo estás?";
	char to_find[12] = " tal";

	char *result = ft_strstr(str, to_find);
	if (result)
	{
		printf("Subcadena encontrada: '%s'\n", result);
	}
	else
	{
		printf("Subcadena no encontrada.\n");
	}
	return (0);
} */