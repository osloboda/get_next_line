/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osloboda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:37:50 by osloboda          #+#    #+#             */
/*   Updated: 2018/10/30 15:30:08 by osloboda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl(char const *s)
{
	char	*p;

	if (s != NULL)
	{
		p = (char*)s;
		while (*p)
		{
			ft_putchar(*p);
			p++;
		}
		ft_putchar('\n');
	}
}
