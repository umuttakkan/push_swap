/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_functions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:53:09 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/10 18:17:05 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
long    median_a(int *data, int i, int l)
{
    int j;
    int k;

    j = -1;
    while(++j <= i)
    {
        k = j;
        while(k++ <= i)
            if (data[j] < data[k])
            {
                data[l] = data[j];
                data[j] = data[k];
                data[k] = data[l];
            }
    }
	if (l > 11)
    	return (data[i / 2]);
	else
		return (data[2]);    
}

long    special_median_a(t_stack *a, int l)
{
    t_lst	*tmp;
    int		*data;
    int		i;
    long	x;

	data = malloc(sizeof(int) * (l + 1));
	if (!data)
        return (0);
    tmp = a->head;
    while (tmp)
    {
        data[i++] = tmp->data;
        tmp = tmp->next;
    }
    x = median_a(&data, i, l);
    return (x);
}

long	get_special_median_a(t_stack *a)
{
	t_lst	*tmp;
	int		*data;
	int		i;
	int		x;

	data = malloc(sizeof(int)* a->argc + 1);
	if (!data)
		return (0);
	tmp = a->head;
	while (tmp)
	{
		data[i++] = tmp->data;
		tmp = tmp->next;
	}
	x = median_a(&data, i, a->argc);
	return (x);
}