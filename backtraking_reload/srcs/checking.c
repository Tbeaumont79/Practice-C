/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bod <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 19:20:25 by bod               #+#    #+#             */
/*   Updated: 2018/08/27 23:10:17 by bod              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int     checking(char **grid, int x, int y, int mines)
{
    if (grid[x][y] == mines)
    {
        ft_putstr("you lose")
        return (0);
    }
    else
    {
        if (grid[x][y] == num || grid[x][y] == ' ')
        {
            //remplacer les etoiles par des espaces, si c'est un seule num on l'affiche et c'est tout
            return (1);
        }
    }
    return (0);
    /* faire une fonction qui check en fonction de la position x && y 
     * si il y a un espace, un nombre ou une bombe si il y a une bombe le jeu s'arrete
     * l'utilisateur entre des coordonnees si elle ne sont pas valide ça renvoi une erreur
     */
}
