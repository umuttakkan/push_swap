/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uakkan <uakkan@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:54:27 by uakkan            #+#    #+#             */
/*   Updated: 2023/03/01 17:17:12 by uakkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct s_stack
{
    int				content;
    struct s_stack 	*next;    
}			t_stack;
#include <stdlib.h>
#include "../ft_printf/ft_printf.h"
#include "../libft/libft.h"

#endif