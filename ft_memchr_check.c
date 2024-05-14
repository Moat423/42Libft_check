/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:48:27 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/07 15:38:03 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

int	memchr_test_cases(void)
{
	int		c;
	size_t	n;
	int		arr_num[] = {4, 17, 0, 0, 19384, 3};
	int		empty_arr_num[] = {};
	char	arr_str[] = "Hello World!";
	char	empty_arr_str[] = "";

	c = 0;
	n = 0;
	printf(COLOR_BLUE "\nmemchr\n" COLOR_RESET);
	while (c < 130)
	{
		while (n < 11)
		{
			if ((memchr((const void *) arr_num, c, n)) == (ft_memchr((const void *) arr_num, c, n)))
				printf(COLOR_GREEN "PASS num\n" COLOR_RESET);
			else
				printf(COLOR_RED "FAIL num n=%lu\n" COLOR_RESET, n);
			if ((memchr((const void *) empty_arr_num, c, n)) == (ft_memchr((const void *) empty_arr_num, c, n)))
				printf(COLOR_GREEN "PASS empty num\n" COLOR_RESET);
			else
				printf(COLOR_RED "FAIL empty num n=%lu\n" COLOR_RESET, n);
			if ((memchr((const void *) arr_str, c, n)) == (ft_memchr((const void *) arr_str, c, n)))
				printf(COLOR_GREEN "PASS str\n" COLOR_RESET);
			else
				printf(COLOR_RED "FAIL str n=%lu\n" COLOR_RESET, n);
			if ((memchr((const void *) empty_arr_str, c, n)) == (ft_memchr((const void *) empty_arr_num, c, n)))
				printf(COLOR_GREEN "PASS empty str\n" COLOR_RESET);
			else
				printf(COLOR_RED "FAIL empty str n=%lu\n" COLOR_RESET, n);
			n += 5;
		}
		n = 0;
	c += 20;
	}
	return (1);
}
