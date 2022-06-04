/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:31:58 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/04 13:56:17 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	ft_print_usage(void)
{
	ft_putstr_fd("Usage: ./philo [num_of_philos] [time_to_die] "
		"[time_to_eat] [time_to_sleep] [optional: num_of_times_to_eat]\n", 2);
}

static int	ft_contains_non_digit(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_args(int ac, char **av)
{
	size_t	i;

	i = 1;
	if (ac != 5 && ac != 6)
		return (ft_print_usage(), 0);
	while (av[i])
	{
		if (ft_contains_non_digit(av[i]) || (ft_atoi(av[i]) <= 0 && i != 5))
			return (ft_print_usage(), 0);
		i++;
	}
	return (1);
}
