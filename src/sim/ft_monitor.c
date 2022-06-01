/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_monitor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:40:01 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 13:51:20 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*ft_monitor(void *s)
{
	int				i;
	t_state			*state;

	i = 0;
	state = (t_state *) s;
	while (69)
	{
		while (i < state->num_of_philos)
		{
			if (state->philos[i].last_time_eaten + state->time_to_die <= ft_current_time(state))
			{
				ft_log("Is dead.", state->philos[i].id, state);
				ft_free_forks(state);
				ft_free_philos(state);
				exit(1);
			}
			i++;
		}
		i = 0;
	}
	return (NULL);
}