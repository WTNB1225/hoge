/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyuki <wyuki@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:18:33 by wyuki             #+#    #+#             */
/*   Updated: 2025/06/07 13:01:36 by wyuki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	is_command(const char *line)
{
	const char	*commands[] = {"sa", "sb", "ss", "ra", "rb", "rr",
		"rra", "rrb", "rrr", "pa", "pb"};
	size_t		command_num;
	size_t		i;

	command_num = 11;
	i = 0;
	while (i < command_num)
	{
		if (ft_strcmp(line, commands[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

void	do_operation(char *line, t_stack *stack_a, t_stack *stack_b)
{
	if (!ft_strcmp(line, "sa"))
		sa_bonus(stack_a);
	else if (!ft_strcmp(line, "sb"))
		sb_bonus(stack_b);
	else if (!ft_strcmp(line, "ss"))
		ss_bonus(stack_a, stack_b);
	else if (!ft_strcmp(line, "ra"))
		ra_bonus(stack_a);
	else if (!ft_strcmp(line, "rb"))
		rb_bonus(stack_b);
	else if (!ft_strcmp(line, "rr"))
		rr_bonus(stack_a, stack_b);
	else if (!ft_strcmp(line, "rra"))
		rra_bonus(stack_a);
	else if (!ft_strcmp(line, "rrb"))
		rrb_bonus(stack_b);
	else if (!ft_strcmp(line, "rrr"))
		rrr_bonus(stack_a, stack_b);
	else if (!ft_strcmp(line, "pa"))
		pa_bonus(stack_a, stack_b);
	else if (!ft_strcmp(line, "pb"))
		pb_bonus(stack_a, stack_b);
}
