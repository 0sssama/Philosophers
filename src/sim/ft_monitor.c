/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_monitor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:40:01 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 15:12:02 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_monitor(t_state *state)
{
	int	i;

	i = 0;
	while (69)
	{
		while (i < state->num_of_philos)
		{
			if (state->philos[i].last_time_eaten + state->time_to_die <= ft_current_time(state))
			{
				ft_log("Is dead.", state->philos[i].id, state);
				return (1);
			}
			i++;
		}
		i = 0;
	}
	return (0);
}
