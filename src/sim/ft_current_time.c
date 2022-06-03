/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_current_time.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:07:32 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/03 14:07:55 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_current_time(t_state *state)
{
	t_time	now;

	gettimeofday(&now, NULL);
	return ((now.tv_sec * 1000 + now.tv_usec/ 1000) - state->time_of_start);
}
