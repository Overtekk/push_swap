/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roandrie <roandrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:36:59 by roandrie          #+#    #+#             */
/*   Updated: 2025/11/29 22:07:43 by roandrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 2)
		return (ft_error(NULL, NULL));
	data.stack_a = NULL;
	data.stack_b = NULL;
	if (convert_argv(argc, argv, &data) == 1)
		return (ft_error(&(data.stack_a), NULL));
	ft_double_lstclear(&(data.stack_a));
	ft_double_lstclear(&(data.stack_b));
	return (0);
}
