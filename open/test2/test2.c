/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bod <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 23:56:50 by bod               #+#    #+#             */
/*   Updated: 2018/08/27 00:44:50 by bod              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"


void	ft_litle_encryptage(void)
{
    int i;
    int e;

    e = 0;
    i = 0;
    while ((i = getchar()) != EOF)
    {
	if (i >= 'a' && i <= 'z')
	{
	    if ((e = i + 13) <= 'z')
		ft_putchar(e);
	    else
	    {
		e = i - 13;
		ft_putchar(e);
	    }
	}
	if (i >= 'A' && i <= 'Z')
	{
	    if ((e = i + 13) <= 'Z')
		ft_putchar(e);
	    else
	    {
		e = i - 13;
		ft_putchar(e);
	    }
	}
    }
}
int	main(void)
{
    ft_litle_encryptage();
    return (0);
}
