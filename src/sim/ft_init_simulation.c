/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_simulation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:01:03 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 10:21:50 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_init_simulation(t_state *state)
{
	state->time_of_start = ft_current_time(state);
	ft_putnbr_fd(ft_current_time(state), 1);
	ft_putchar_fd('\n', 1);
	usleep(30000);
	ft_putnbr_fd(ft_current_time(state), 1);
	ft_putchar_fd('\n', 1);
}
