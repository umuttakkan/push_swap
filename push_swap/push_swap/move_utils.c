/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:14:04 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/01 17:56:36 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_stack_push(t_stack **data, t_stack *new)
{
    if (!data && !*data)
        return (NULL);
    new->next = *data;
    *data = new;
}

void    ft_stack_pop(t_stack *data)
{
    t_stack *temporary;

    if (!data)
        return (NULL);
    temporary = data;
    data = data->next;
    free(temporary);
}

t_stack    *ft_stack_new(int data)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if(!new)
		return (NULL);
    new->content = data;
	new->next = NULL;
	return (new);
}

void	ft_stack_clear(t_stack **data)
{
	if (*data)
		ft_stack_pop(data);
}

t_stack *ft_stack_add(t_stack **data)
{
	t_stack *value;

	if (!data && !*data)
		return (NULL);
	value = malloc(sizeof(t_stack));
	if(!value)
		return (NULL);
	value->content = (*data)->content;
	value->next = NULL;
	return (value);
	
}