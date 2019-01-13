/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bod <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 01:30:36 by bod               #+#    #+#             */
/*   Updated: 2018/12/15 02:11:31 by bod              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H

# define FT_LIST_H

#include <stdlib.h>

typedef struct          s_list
{
    struct s_list       *next;
    void                *data;
}                       t_list;

t_list          *ft_create_elem(void *data);
void            print_list(t_list*list);
void            ft_putchar(char c);
char            *ft_putstr(char *str);

#endif
