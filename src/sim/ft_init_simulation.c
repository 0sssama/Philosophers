/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_simulation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:01:03 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 13:50:11 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*ft_routine(void *philo)
{
	t_philo		*ph;

	ph = (t_philo *)philo;
	while (420)
	{
		// hmmmmm - thinking
		ft_log("Is thinking...", ph->id, ph->state);
		// yum yum yum - eating
		if (ph->id % 2 == 0)
			ft_lock_left_fork(ph);
		else
			ft_lock_right_fork(ph);

		if (ph->id % 2 == 0)
			ft_lock_right_fork(ph);
		else
			ft_lock_left_fork(ph);
		ft_log("Is eating...", ph->id, ph->state);
		usleep(ph->state->time_to_eat * 1000);
		ft_unlock_left_fork(ph);
		ft_unlock_right_fork(ph);
		ph->last_time_eaten = ft_current_time(ph->state);
		// ZzzzZZzz - sleeping
		ft_log("Is sleeping...", ph->id, ph->state);
		usleep(ph->state->time_to_sleep * 1000);
	}
	return (NULL);
}

void	ft_init_simulation(t_state *state)
{
	int	i;

	i = 0;
	state->time_of_start = ft_current_time(state);
	while (i < state->num_of_philos)
	{
		pthread_create(&state->philos[i].thread, NULL, ft_routine, &state->philos[i]);
		i++;
	}
	i = 0;
	while (i < state->num_of_philos)
	{
		pthread_join(state->philos[i].thread, NULL);
		i++;
	}
	pthread_create(&state->monitor, NULL, ft_monitor, state);
	pthread_detach(state->monitor);
}
