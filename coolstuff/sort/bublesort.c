/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bublesort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bod <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:53:28 by bod               #+#    #+#             */
/*   Updated: 2018/10/09 19:14:22 by bod              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_sortintegertable(int *tab, int size)
{
    int i;
    int j;
    int temp;

    j = 0;
    temp = 0;
    while (i < size)
    {
        i = 0;
        while (tab[i + 1] > tab[i])
        {
            temp = tab[i + 1];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i++;
        }
    }
    return (tab);
}
