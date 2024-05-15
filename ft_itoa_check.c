/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:15:21 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/14 16:29:09 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

static int	run_test(int num)
{
	char	*strnum;
	char	buffer[13];

	strnum = ft_itoa(num);
	sprintf(buffer, "%d", num);
	if (strcmp(buffer, strnum) != 0)
	{
		printf(COLOR_RED "FAIL\n" COLOR_RESET);
		printf(COLOR_BLUE "expected: %d got: %s\n" COLOR_RESET, num, strnum);
		free(strnum);
		return (1);
	}
	free(strnum);
	return (0);
}

int	itoa_test_cases(void)
{
	int				i;
	int				num_array[] = {INT_MIN, INT_MAX, 0, -23838, 38493, 1022, 1, 400, 4833};
	unsigned int	res;

	i = 0;
	res = 0;
	printf(COLOR_BLUE "itoa\n(if nothing is printed here, you passed)\n" COLOR_RESET);
	while (num_array[i])
		res += run_test(num_array[i++]);
	return (1);
}
