/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:59:44 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/05 22:11:14 by uakkan           ###   ########.fr       */
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
		if (str[i][j] == '-')
			j++;
		if (!ft_isdigit(str[i][j]))
			exit(ft_printf("Error! Only Number!"));
		while(ft_isdigit(str[i][j]))
			j++;
		if(str[i][j])
			exit(ft_printf("Error! Only Number!"));
		i++;
	}
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
		
}

