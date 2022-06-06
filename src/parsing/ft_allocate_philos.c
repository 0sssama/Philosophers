/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate_philos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:01:46 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/06 11:18:14 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_allocate_philos(t_state *state)
{
	int		i;
	t_philo	*philos;

	i = 0;
	philos = (t_philo *) malloc(state->num_of_philos * sizeof(t_philo));
	if (philos == NULL)
	{
		ft_error("Malloc failed");
		return (1);
	}
	while (i < state->num_of_philos)
	{
		philos[i].id = i;
		philos[i].state = state;
		philos[i].last_time_eaten = 0;
		if (pthread_mutex_init(&philos[i].left_fork, NULL))
		{
			ft_error("Mutex init failed");
			return (1);
		}
		i++;
	}
	state->philos = philos;
	return (0);
}
