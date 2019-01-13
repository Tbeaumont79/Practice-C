#include "list.h"

item    *create_elem(void *data)
{
    t_list *item;
    item = malloc(sizeof(*t_list));
    if (item == NULL)
        return (NULL);
    item = data;
    item->next = NULL;
    return (item);
}

