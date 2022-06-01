/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_current_time.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:07:32 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 10:21:06 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_current_time(t_state *state)
{
	gettimeofday(&state->current_time, NULL);
	return (state->current_time.tv_sec * 1000 + state->current_time.tv_usec
			/ 1000 - state->time_of_start);
}
