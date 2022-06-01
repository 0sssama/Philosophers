/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lock_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:07:19 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 15:24:07 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_lock_right_fork(t_philo *philo)
{
	if (philo->state->forks[philo->id].id == -1)
	{
		ft_lock_left_fork(philo);
		return ;
	}
	pthread_mutex_lock(&philo->state->forks[philo->id].mutex);
	ft_log("Has taken a fork", philo->id, philo->state);
}

void	ft_lock_left_fork(t_philo *philo)
{
	pthread_mutex_lock(&philo->state->forks[philo->id - 1].mutex);
	ft_log("Has taken a fork", philo->id, philo->state);
}

void	ft_unlock_right_fork(t_philo *philo)
{
	if (philo->state->forks[philo->id].id == -1)
	{
		ft_unlock_left_fork(philo);
		return ;
	}
	pthread_mutex_unlock(&philo->state->forks[philo->id].mutex);
}

void	ft_unlock_left_fork(t_philo *philo)
{
	pthread_mutex_unlock(&philo->state->forks[philo->id - 1].mutex);
}
