/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:22:04 by olabrahm          #+#    #+#             */
/*   Updated: 2022/05/24 14:33:18 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <pthread.h>

// define a struct called s_state
typedef struct	s_state
{
	int	num_of_philos; // also num of forks
	int	time_to_die; // in ms
	int	time_to_eat; // in ms
	int	time_to_sleep; // in ms
	int	total_eats; // in ms
}	t_state;

// define a struct called s_philo
typedef struct s_philo
{
	int	id;
	int	timestamp;
}	t_philo;

#endif