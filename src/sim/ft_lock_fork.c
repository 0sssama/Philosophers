/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lock_fork.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:07:19 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/03 13:21:23 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_lock_right_fork(t_philo *philo)
{
	if (philo->state->flag)
		return ;
	pthread_mutex_lock(philo->right_fork);
	ft_log("Has taken a fork", philo->id, philo->state);
}

void	ft_lock_left_fork(t_philo *philo)
{
	if (philo->state->flag)
		return ;
	pthread_mutex_lock(&philo->left_fork);
	ft_log("Has taken a fork", philo->id, philo->state);
}

void	ft_unlock_right_fork(t_philo *philo)
{
	if (philo->state->flag)
		return ;
	pthread_mutex_unlock(philo->right_fork);
}

void	ft_unlock_left_fork(t_philo *philo)
{
	if (philo->state->flag)
		return ;
	pthread_mutex_unlock(&philo->left_fork);
}
