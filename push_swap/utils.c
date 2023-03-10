/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:49:20 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/10 18:19:54 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	argc_control(int argc)
{
	if (argc == 2)
		return (0);
	else 
		return (1);		
}

int	get_count(t_stack *a)
{
	t_lst *tmp;
	int count;

	tmp = a->head;
	while (tmp && count < 12)
	{
		count++;
		tmp = tmp->next;
	}
	if (count == 3)
		return (-1);
	return (count);
}