/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:59:44 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/07 22:36:13 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_only_number(int argc, char **str)
{
	int i;
	int j;

	i = argc_control(argc);
	if (i == 0)
	{
		argc = 0;
		while(str[argc])
			argc++;
	}
	while (i < argc)
	{
		j = 0;
		while(str[i][j])
		{
			if (!ft_isdigit(str[i][j]))
					exit(ft_printf("%s", "Error! Only Number!"));
			j++;
		}
		i++;
	}
	return (argc);
}

void	ft_lstaddend_fast(char *str, t_lst **end)
{
	int		x;
	t_lst	*tmp;
	
	if (!(*end))
		return ;
	x = ft_atol(str);
	if (x > INT32_MAX || x < INT32_MIN)
		exit(ft_printf("Error! Number is not in the integer range!"));
	tmp = malloc(sizeof(t_lst));
	if(!tmp)
		return ;
	tmp->data = x;
	tmp->next = NULL;
	tmp->prev = *end;
	(*end)->next = tmp; 
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
	data[i] = '\0';
	j = -1;
	while (++j < i)
	{
		k = 0;
		while (k < i)
			if (data[j] == data[++k] && j != k)
				return (0);
	}
	return (1);
}

void	build_stack(t_stack *a, t_stack *b, int argc, char **str)
{
	int i;
	t_lst *tmp;

	i = argc_control(argc);
	argc = check_only_number(argc, str);	
	a->head = malloc(sizeof(t_lst));
	if (!a->head)
		return ;
	a->head->data = ft_atoi(str[i++]);
	a->head->prev = NULL;
	a->end = a->head;
	while(i < argc)
		ft_lstaddend_fast(str[i++], &a->end);
	if  (!check_double_number(a, argc))
	{
		while(a->head)
		{
			tmp = a->head;
			a->head = a->head->next;
			free(tmp);
		}
		exit(ft_printf("%s", "Error! Numbers do not differ from each other!"));
	}
	b->head = NULL;
	b->end = NULL;	
}

