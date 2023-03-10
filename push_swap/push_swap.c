/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:49:06 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/10 18:19:14 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		i;
	char	**str;

	i = 0;
	if (argc == 2)
	{
		str = ft_split(argv[1], ' ');
		build_stack(&a, &b, argc, str);
	}
	else
		build_stack(&a, &b, argc, argv);
	a.argc = argc;
	b.argc = argc;
	solver(&a, &b);
	return (0);
}