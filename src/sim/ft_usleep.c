/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:14:57 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/02 10:37:49 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_to_microsecond(t_time time)
{
	return (time.tv_sec * 1000000 + time.tv_usec);
}

void	ft_usleep(int time)
{
	int		majority;
	t_time	start_time;
	t_time	now;

	gettimeofday(&start_time, NULL);
	majority = time * .9;
	usleep(majority);
	while (1)
	{
		gettimeofday(&now, NULL);
		if (ft_to_microsecond(now) - ft_to_microsecond(start_time) >= time)
			break ;
		usleep(10);
	}
}
