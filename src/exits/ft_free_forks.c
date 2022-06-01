/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_forks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:51:56 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 13:31:47 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_free_forks(t_state *state)
{
	int		i;
	t_fork	*forks;

	i = 0;
	forks = state->forks;
	while (i < state->num_of_philos)
	{
		pthread_mutex_destroy(&forks[i].mutex);
		i++;
	}
	free(forks);
	state->forks = NULL;
}
