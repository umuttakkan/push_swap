/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:08:00 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/10 18:19:30 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int split_a(t_stack *a, t_stack *b)
{
    int median;
    int count;

    count = get_count(a);
    median = NO_MEDIAN;
    if (count <= 11 && count >3)
        median = special_median_a(a, count);
    else if (count > 11)
        median = get_special_median_a(a);

}

int sorted(t_stack *a)
{
    t_lst *tmp;

    tmp = a->head;
    while (tmp)
    {
        if (tmp->next && tmp &&tmp->next->data < tmp->data)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}
void solver(t_stack *a, t_stack *b)
{
    int sort;
    int ret;

    ret = 0;
    if (!(sort = sorted(&a)))
    {
        if (!sort)
        {
            while (ret = split_a(a, b) == 0);
            
        }
        else
        {
            
        }
    }
    
}