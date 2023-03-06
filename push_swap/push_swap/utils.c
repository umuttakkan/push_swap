/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:59:44 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/06 19:24:26 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_only_number(int argc, char **str)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i <= argc)
	{
		j = 0;
		while(str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
				exit(ft_printf("Error! Only Number!"));
			j++;
		}
		i++;
	}
}

void	ft_lstaddend_fast(char *str, t_stack **end)
{
	int		x;
	t_lst	*tmp;
	
	if (!(*end))
		return (0);
	x = ft_atol(str);
	if (x > INT32_MAX || x < INT32_MIN)
		exit(ft_printf("Error! Number is not in the integer range!"));
	tmp = mallocI(sizeof(t_lst));
	if(!tmp)
		return (0);
	tmp->data = x;
	tmp->next = NULL;
	tmp->prev = *end;
	*end = tmp;	
}

int	check_double_number(t_stack *a, int argc)
{
	t_lst	*tmp;
	int		i;
	int		j;
	int		k;
	char	*data;

	i = 0;
	data = malloc(sizeof(argc + 1));
	if(!data)
		return (0);
	tmp = a->head;
	while(tmp)
	{
		data[i++] = tmp->data;
		tmp = tmp->next;
	}
	j = -1;
	while (++j <= i)
	{
		k = 0;
		while (k <= i)
			if (data[j] == data[k++])
				return (0);
	}
	return (1);
}

void	build_stack(t_stack *a, t_stack *b, int argc, char **str)
{
	int i;

	i = 0;
	check_only_number(argc, str);
	a->head = malloc(sizeof(t_lst));
	if (!a->head)
		return (0);
	a->head->data = ft_atoi(str[i++]);
	a->head->prev = NULL;
	a->end = a->head;
	while(i <= argc)
		ft_lstaddend_fast(str[i++], &a->end);
	if  (!check_double_number(a, argc))
	{
		
	}
		
}

