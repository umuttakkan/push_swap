/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:14:04 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/06 19:42:00 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_stack_push(t_lst **data, t_lst *new)
{
    if (!data && !*data)
        return (NULL);
    new->next = *data;
    *data = new;
}

void    ft_stack_pop(t_lst *data)
{
    t_lst *temporary;

    if (!data)
        return (NULL);
    temporary = data;
    data = data->next;
    free(temporary);
}

t_stack    *ft_stack_new(int data)
{
	t_lst	*new;

	new = malloc(sizeof(t_stack));
	if(!new)
		return (NULL);
    new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_stack_clear(t_lst **data)
{
	if (*data)
		ft_stack_pop(data);
}

t_stack *ft_stack_add(t_lst **data)
{
	t_lst *value;

	if (!data && !*data)
		return (NULL);
	value = malloc(sizeof(t_stack));
	if(!value)
		return (NULL);
	value->data = (*data)->data;
	value->next = NULL;
	return (value);
	
}