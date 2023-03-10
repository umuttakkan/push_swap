/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:54:27 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/10 17:58:03 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#define NO_MEDIAN 0

typedef struct s_lst
{
    int             data;
    struct s_lst    *next;
    struct s_lst    *prev;
}               t_lst;

typedef struct		s_stack
{
	t_lst			*head;
	t_lst			*end;
	int				argc;
}					t_stack;

#include <stdlib.h>
#include <math.h>
#include "../ft_printf/ft_printf.h"
#include "../libft/libft.h"

int	argc_control(int argc);
void	build_stack(t_stack *a, t_stack *b, int argc, char **str);
#endif