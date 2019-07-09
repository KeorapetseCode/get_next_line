/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:39:54 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/06/18 10:40:15 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int		counta;

	counta = 0;
	if (s)
	{
		while (s[counta] != '\0')
		{
			write(1, &s[counta], 1);
			counta++;
		}
		write(1, "\n", 1);
	}
}
