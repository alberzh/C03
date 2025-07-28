/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:11:12 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/28 17:23:39 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (to_find[0])
	    return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + i])
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}