/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:54:16 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/02 10:24:05 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_log(char *str, int id, t_state *state)
{
	pthread_mutex_lock(&state->writing);
	printf("%10d: %d %s\n", ft_current_time(state), id, str);
	if (ft_strcmp(str, "Is dead."))
		pthread_mutex_unlock(&state->writing);
}
