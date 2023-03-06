/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:54:27 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/06 18:35:15 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

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
	t_lst			**p;
	int				top;
	int				ac;
}					t_stack;

#include <stdlib.h>
#include <math.h>
#include "../ft_printf/ft_printf.h"
#include "../libft/libft.h"
#endif