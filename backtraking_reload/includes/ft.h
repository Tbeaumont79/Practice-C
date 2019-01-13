/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bod <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 19:03:49 by bod               #+#    #+#             */
/*   Updated: 2018/08/27 19:19:22 by bod              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>


void    display(char **grid);
void    init_grid(char **argv, char **grid);
void    ft_putstr(char *str);
void    ft_putchar(char c);

# endif
