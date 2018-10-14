#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void*, void*))
{
    t_list *icurr = *begin_list;
    if ((*cmp)(data_ref, icurr->data))
    {
        *begin_list = icurr->next;
    }
    t_list *prev = icurr;
    t_list *curr = icurr->next;
    while (curr)
    {
        if (!((*cmp)(data_ref, curr->data)))
        {
            prev = curr;
            curr = curr->next;
        } else
        {
            prev->next = curr->next;
            prev = curr->next;
            curr = prev->next;
        }

    }
}