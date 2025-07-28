/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:57:25 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/28 17:09:25 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char destin[50] = "Qué pasa "; // Array con espacio suficiente
	char *source = "por aquí muchacho??";

	printf(" String origen: '%s',\n String destino antes de concatenar: '%s'\n",
		source, destin);
	ft_strncat(destin, source, 7);
	printf(" String destino después: '%s'\n", destin);
	return (0);
} */