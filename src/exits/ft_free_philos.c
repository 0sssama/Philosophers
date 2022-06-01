/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_philos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:50:10 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 13:31:43 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_free_philos(t_state *state)
{
	int	i;

	i = 0;
	while(i < state->num_of_philos)
	{
		pthread_detach(state->philos[i].thread);
		i++;
	}
	free(state->philos);
	state->philos = NULL;
}
