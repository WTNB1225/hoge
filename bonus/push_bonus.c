/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyuki <wyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 02:08:45 by wyuki             #+#    #+#             */
/*   Updated: 2025/06/07 12:59:23 by wyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa_bonus(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*move;

	if (stack_b->next == stack_b)
		return ;
	move = pop(stack_b);
	push(stack_a, move);
}

void	pb_bonus(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*move;

	if (stack_a->next == stack_a)
		return ;
	move = pop(stack_a);
	push(stack_b, move);
}
