/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bod <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 01:33:22 by bod               #+#    #+#             */
/*   Updated: 2018/12/15 02:26:20 by bod              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list          *ft_create_elem(void *data)
{
    t_list *item;

    item = malloc(sizeof(t_list));
    data = (char *)data;
    if (item == NULL)
        return (NULL);

    item->data = data;
    item->next = NULL;

    return (item);
}
