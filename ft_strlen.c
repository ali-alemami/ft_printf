/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalemami <aalemami@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:25:33 by aalemami          #+#    #+#             */
/*   Updated: 2025/09/08 16:27:56 by aalemami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	char	*start;

	if (!s)
		return (0);
	start = s;
	while (*s)
	{
		s++;
	}
	return (s - start);
}
