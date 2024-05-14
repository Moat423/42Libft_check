/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:59:13 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/06 10:27:05 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

int	isprint_test_cases(void)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while ((i < 129))
	{
		while ((i >= 32) && (i <= 126))
		{
			if (ft_isprint(i) != 0)
			{
				printf("%d, ", i);
				i++;
			}
			else 
			{
				flag = 1;
				printf(COLOR_RED"\nisprint unsuccessful, error at %d\n"COLOR_RESET, i);
				break ;
			}
		}
		printf("%d, ", i);
		i++;
	}
	if (flag == 0)
	{
		printf(COLOR_GREEN"\nisprint successfull\n"COLOR_RESET);
		return (1);
	}
	return (0);
}
