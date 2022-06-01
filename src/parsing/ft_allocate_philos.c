/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate_philos.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 12:01:46 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 09:47:32 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_allocate_philos(t_state *state)
{
	int		i;
	t_philo	*philos;

	i = 0;
	philos = (t_philo *) malloc(state->num_of_philos * sizeof(t_philo));
	if (!philos)
		ft_error("Malloc failed");
	while (i < state->num_of_philos)
	{
		philos[i].id = i + 1;
		philos[i].timestamp = 0;
		i++;
	}
	state->philos = philos;
	printf("philos allocated\n");
}
