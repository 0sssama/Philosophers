/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:22:04 by olabrahm          #+#    #+#             */
/*   Updated: 2022/05/26 10:28:07 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <pthread.h>
# include "libft.h"


// define a struct called s_philo
typedef struct s_philo
{
	int			id;
	int			timestamp;
	pthread_t	thread;
}	t_philo;

// define a struct called s_state
typedef struct	s_state
{
	int		num_of_philos; // also num of forks
	int		time_to_die; // in ms
	int		time_to_eat; // in ms
	int		time_to_sleep; // in ms
	int		total_eats; // in ms
	t_philo	*philos;
}	t_state;

// parsing
int		ft_check_args(int ac, char **av);
void	ft_fill_state(t_state *state, char **av);
void	ft_allocate_philos(t_state *state);
void	ft_error(char *msg);

#endif