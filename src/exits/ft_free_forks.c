/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_forks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:51:56 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/03 13:23:26 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_free_forks(t_state *state)
{
	int		i;

	i = 0;
	while (i < state->num_of_philos)
	{
		pthread_mutex_destroy(&state->philos[i].left_fork);
		i++;
	}
}
