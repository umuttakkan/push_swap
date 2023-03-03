/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:55:15 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/01 17:14:17 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *lst, char data)
{
	int	swap;

	if (!lst)
		return (0);
	swap = lst->next->content;
	lst->next->content = lst->content;
	lst->content = swap;
	if (data = 's')
		ft_printf("sa\n");
	else if (data = 'a')
		ft_print("as\n");
}

void	pa_pb(t_stack **lst_a, t_stack **lst_b, char data)
{
	t_stack	*previous;
	if (data == 'a')
	{
		previous = (*lst_b)->next;
		ft_lstadd_front(lst_a, *lst_b);
		*lst_b = previous;
		ft_printf("pa\n");
	}
	else if (data == 'b')
	{
		previous = (*lst_a)->next;
		ft_lstadd_back(lst_b, *lst_a);
		*lst_a = previous;
		ft_printf("pb\n");
	}
}

void	ra_rb(t_stack **lst, char data)
{
	t_stack *lst_first;
	t_stack *lst_end;                   

	if (!lst || !*lst)
		exit(ft_printf("Error(ra_rb)\n"));
	lst_first = (*lst)->next;            
	lst_end = ft_lstlast(*lst);				
	lst_end->next = *lst;					
	lst_end->next->next = NULL;
	*lst = lst_first;
	if (data == 'a')
		ft_printf("ra\n");
	else if (data == 'b')
		ft_printf("rb\n");
}

void	rra_rrb(t_stack **lst, char data)
{
	t_stack	*lst_first;

	if (!lst || !*lst)
		exi(ft_printf("Error(rra_rrb)\n"));
	lst_first =ft_lstlast(*lst);
	lst_first->next = *lst;
	*lst = lst_first;
	if (data == 'a')
		ft_printf("rra\n");
	else if (data == 'b')
		ft_printf("rrb\n");
}
