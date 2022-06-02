/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:00:03 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/02 11:00:17 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

t_fork	*ft_right_fork(t_philo *philo)
{
	return (&philo->state->forks[(philo->id + 1) % philo->state->num_of_philos]);
}

t_fork	*ft_left_fork(t_philo *philo)
{
	return (&philo->state->forks[philo->id]);
}
