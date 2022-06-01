/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:11:53 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/01 09:59:28 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_state		state;

	if (!ft_check_args(ac, av))
		return (1);
	ft_fill_state(&state, av);
	ft_free_philos(&state);
	ft_free_forks(&state);
	return (0);
}
