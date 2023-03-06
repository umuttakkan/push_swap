/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:49:06 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/05 22:05:55 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	int		i;
	char	**str;
	t_stack	a;
	t_stack	b;
	i = 0;
	if (argc > 1)
	{
		str = ft_split(argv, ' ');
		build_stack(&a, &b, argc, str);

	}
	return (0);
}