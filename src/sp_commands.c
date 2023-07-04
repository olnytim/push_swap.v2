/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:37:07 by tgalyaut          #+#    #+#             */
/*   Updated: 2023/07/04 16:30:55 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

void	sa(t_stack *stack)
{
	t_node	*a;
	t_node	*b;

	if (!ft_empty(stack) && stack->first->next)
	{
		a = stack->first;
		b = stack->first->next;
		a->next = b->next;
		b->next = a;
		stack->first = b;
	}
	ft_printf("sa\n");
}

void	sb(t_stack *stack)
{
	t_node	*a;
	t_node	*b;

	if (!ft_empty(stack) && stack->first->next)
	{
		a = stack->first;
		b = stack->first->next;
		a->next = b->next;
		b->next = a;
		stack->first = b;
	}
	ft_printf("sb\n");
}

void	ss(t_stack *stack1, t_stack *stack2)
{
	sa(stack1);
	sb(stack2);
	ft_printf("ss\n");
}

void	pa(t_stack *stack1, t_stack *stack2)
{
	int	temp;

	if (ft_empty(stack2))
		return ;
	temp = ft_pop(stack2);
	ft_push(stack1, temp);
	ft_printf("pa\n");
}

void	pb(t_stack *stack1, t_stack *stack2)
{
	int	temp;

	if (ft_empty(stack1))
		return ;
	temp = ft_pop(stack1);
	ft_push(stack2, temp);
	ft_printf("pb\n");
}
