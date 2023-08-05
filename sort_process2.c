/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_process2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murdemir <murdemir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:14:35 by murdemir          #+#    #+#             */
/*   Updated: 2023/08/04 15:14:36 by murdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sortmove_a(t_data *p, int index_a, int index_b)
{
	if (index_b > 0)
	{
		if (index_a < index_b)
		{
			ft_sort_fnhook(ft_abs(index_a), &ft_rotate, p, 'x');
			ft_sort_fnhook(index_b - index_a, &ft_rotate, p, 'b');
		}
		else
		{
			ft_sort_fnhook(ft_abs(index_b), &ft_rotate, p, 'x');
			ft_sort_fnhook(index_a - index_b, &ft_rotate, p, 'a');
		}
	}
	else
	{
		ft_sort_fnhook(ft_abs(index_b), &ft_revrotate, p, 'b');
		ft_sort_fnhook(index_a, &ft_rotate, p, 'a');
	}
}

void	ft_sortmove_b(t_data *p, int index_a, int index_b)
{
	if (index_b < 0)
	{
		if (index_a < index_b)
		{
			ft_sort_fnhook(ft_abs(index_b), &ft_revrotate, p, 'x');
			ft_sort_fnhook(ft_abs(index_b - index_a),
				&ft_revrotate, p, 'a');
		}
		else
		{
			ft_sort_fnhook(ft_abs(index_a), &ft_revrotate, p, 'x');
			ft_sort_fnhook(ft_abs(index_a - index_b),
				&ft_revrotate, p, 'b');
		}
	}
	else
	{
		ft_sort_fnhook(index_b, &ft_rotate, p, 'b');
		ft_sort_fnhook(ft_abs(index_a), &ft_revrotate, p, 'a');
	}
}
