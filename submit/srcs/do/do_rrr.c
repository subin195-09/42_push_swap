/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 22:13:17 by skim              #+#    #+#             */
/*   Updated: 2021/05/21 02:04:14 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	do_rrr(t_stack **a, t_stack **b, t_info *info)
{
	do_rra(a, b, info);
	do_rrb(a, b, info);
}