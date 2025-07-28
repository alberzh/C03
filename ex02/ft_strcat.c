/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:38:48 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/28 16:23:12 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char destin[50] = "Qué pasa "; // Array con espacio suficiente
	char *source = "por aquí??";

	printf(" String origen: '%s',\n String destino antes de concatenar: '%s'\n",
		source, destin);
	ft_strcat(destin, source);
	printf(" String destino después: '%s'\n", destin);
	return (0);
} */