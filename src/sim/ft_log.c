/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:54:16 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/03 12:55:30 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_log(char *str, int id, t_state *state)
{
	pthread_mutex_lock(&state->writing);
	printf("%10d: %d %s\n", ft_current_time(state), id + 1, str);
	if (!state->flag)
		pthread_mutex_unlock(&state->writing);
}
