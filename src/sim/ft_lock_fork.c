/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lock_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:07:19 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/03 11:15:15 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_lock_right_fork(t_philo *philo)
{
	if (philo->state->flag)
		return ;
	pthread_mutex_lock(&ft_right_fork(philo)->mutex);
	ft_log("Has taken a fork", philo->id, philo->state);
}

void	ft_lock_left_fork(t_philo *philo)
{
	if (philo->state->flag)
		return ;
	pthread_mutex_lock(&ft_left_fork(philo)->mutex);
	ft_log("Has taken a fork", philo->id, philo->state);
}

void	ft_unlock_right_fork(t_philo *philo)
{
	if (philo->state->flag)
		return ;
	pthread_mutex_unlock(&ft_right_fork(philo)->mutex);
}

void	ft_unlock_left_fork(t_philo *philo)
{
	if (philo->state->flag)
		return ;
	pthread_mutex_unlock(&ft_left_fork(philo)->mutex);
}
