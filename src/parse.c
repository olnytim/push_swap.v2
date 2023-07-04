/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgalyaut <tgalyaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:36:25 by olnytim           #+#    #+#             */
/*   Updated: 2023/07/04 21:50:53 by tgalyaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../hf/push_swap.h"

// char	*ft_parser(char **av)
// {
	
// }

void	ft_argchecker(int ac, char **av, t_stack *a)
{
	int	i;

	if (ac > 1)
	{
		i = ac - 1;
		while (av[i] && i > 0)
		{
			if (ft_isnum(av[i]) == 1)
				exit(0);
			ft_push(a, ft_atoi(av[i]));
			--i;
		}
	}
	else
		exit(1);
	return ;
}
