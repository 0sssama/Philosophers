/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:22:04 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/03 11:04:35 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <pthread.h>
# include <sys/time.h>
# include "libft.h"


// define a struct called s_philo
typedef struct s_philo
{
	int				id;
	int				last_time_eaten;
	pthread_t		thread;
	struct	s_state	*state;
}	t_philo;

// define a struct called s_fork
typedef struct s_fork
{
	int				id;
	pthread_mutex_t	mutex;
}	t_fork;

typedef struct timeval t_time;

// define a struct called s_state
typedef struct	s_state
{
	int				num_of_philos; // also num of forks
	int				time_to_die; // in ms
	int				time_to_eat; // in ms
	int				time_to_sleep; // in ms
	int				total_eats; // in ms
	int				time_of_start; // in ms
	int				flag;
	t_time			current_time; // in ms
	t_philo			*philos;
	t_fork			*forks;
	pthread_t		monitor; // monitors if any of the philos died
	pthread_mutex_t	writing;
}	t_state;

// parsing
int		ft_check_args(int ac, char **av);
void	ft_fill_state(t_state *state, char **av);
void	ft_allocate_philos(t_state *state);
void	ft_allocate_forks(t_state *state);

// simulation
int		ft_current_time(t_state *state);
void	ft_init_simulation(t_state *state);
void	ft_log(char *str, int id, t_state *state);
void	ft_lock_right_fork(t_philo *philo);
void	ft_lock_left_fork(t_philo *philo);
void	ft_unlock_right_fork(t_philo *philo);
void	ft_unlock_left_fork(t_philo *philo);
int		ft_monitor(t_state *state);
void	ft_usleep(int time);
t_fork	*ft_right_fork(t_philo *philo);
t_fork	*ft_left_fork(t_philo *philo);

// exits
void	ft_error(char *msg);
void	ft_free_philos(t_state *state);
void	ft_free_forks(t_state *state);

#endif