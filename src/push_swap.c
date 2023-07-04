/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:36:18 by olnytim           #+#    #+#             */
/*   Updated: 2023/07/04 22:45:41 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"
#include <stdio.h>

void	ft_print(struct s_stack *stack)
{
	t_node	*temp;

	temp = stack->first;
	while (temp)
	{
		ft_printf("Number is: %d index[%d]\n", temp->value, temp->index);
		temp = temp->next;
	}
}

int	ft_done(t_stack *a)
{
	t_node	*temp;

	temp = a->first;
	while (temp && temp->next)
	{
		if (temp->value > temp->next->value)
			return (1);
		temp = temp->next;
	}
	return (0);
}

int	ft_isnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57 && str[i] == '-')
			return (1);
		++i;
	}
	return (0);
}

void	ft_push_swap(t_stack *a, t_stack *b)
{
	(void)b;
	if (ft_counter(a) < 3)
		sorting_2(a);
}

int	main(int ac, char **av)
{
	struct s_stack	*a;
	struct s_stack	*b;

	a = ft_set_stack();
	ft_argchecker(ac, av, a);
	if (!ft_done(a))
		return (0);
	// ft_address(a);
	ft_array_compare(a, ft_sort_array(a, ft_array(a)));
	b = ft_set_stack();
	// ft_push_swap(a, b);
	ft_printf("------------\n");
	ft_print(a);
	// ft_print(b);
	// ft_free_nodes(a);
	// free(b);
	system("leaks push_swap");
	return (0);
}


// 3 -8 9 10 -10 11