/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lock_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:07:19 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 12:09:03 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_lock_right_fork(t_philo *philo)
{
	pthread_mutex_lock(&philo->state->forks[philo->id].mutex);
}

void	ft_lock_left_fork(t_philo *philo)
{
	pthread_mutex_lock(&philo->state->forks[philo->id - 1].mutex);
}

void	ft_unlock_right_fork(t_philo *philo)
{
	pthread_mutex_unlock(&philo->state->forks[philo->id].mutex);
}

void	ft_unlock_left_fork(t_philo *philo)
{
	pthread_mutex_unlock(&philo->state->forks[philo->id - 1].mutex);
}
