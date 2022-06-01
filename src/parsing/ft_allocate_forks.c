/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate_forks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:37:18 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 10:24:11 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_allocate_forks(t_state *state)
{
	int		i;
	t_fork	*forks;

	i = 0;
	forks = (t_fork *) malloc(state->num_of_philos * sizeof(t_fork));
	if (!forks)
		ft_error("Malloc failed");
	while (i < state->num_of_philos)
	{
		forks[i].id = i;
		pthread_mutex_init(&forks[i].mutex, NULL);
		i++;
	}
	state->forks = forks;
	printf("forks allocated, mutexes initialized\n");
}
