/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pveeta <pveeta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 22:03:41 by pveeta            #+#    #+#             */
/*   Updated: 2022/03/05 20:26:54 by pveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

U_INT	launch_env(t_input *input)
{
	t_env	*copy;

	if (!input->envp)
		return (0);
	copy = input->envp;
	while (copy != NULL)
	{
		if (copy->equal == 1)
			printf("%s%s%s\n", copy->key, "=", copy->value);
		copy = copy->next;
	}
	return (0);
}
