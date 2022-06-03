/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:14:57 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/03 12:15:59 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_to_ms(t_time time)
{
	return (time.tv_sec * 1000 + time.tv_usec / 1000);
}

void	ft_usleep(int time)
{
	t_time	start_time;
	t_time	now;

	gettimeofday(&start_time, NULL);
	gettimeofday(&now, NULL);
	while (ft_to_ms(start_time) + time > ft_to_ms(now))
	{
		usleep(50);
		gettimeofday(&now, NULL);
	}
}
