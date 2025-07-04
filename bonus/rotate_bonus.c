/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyuki <wyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 06:02:48 by wyuki             #+#    #+#             */
/*   Updated: 2025/06/07 13:00:15 by wyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	rotate(t_stack *stack)
{
	t_stack	*move;

	move = pop(stack);
	add_tail(stack, move);
}

void	ra_bonus(t_stack *stack_a)
{
	rotate(stack_a);
}

void	rb_bonus(t_stack *stack_b)
{
	rotate(stack_b);
}

void	rr_bonus(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
