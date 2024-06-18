/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:34:02 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/16 10:36:08 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

int	memcmp_test_cases(void)
{
	const char str1[] = "Hello";
	const char str2[] = "Helao";
	size_t n = 5;

	int result = ft_memcmp(str1, str2, n);
	if (result == 0)
		printf("The memory areas are identical.\n");
	else if (result > 0)
		printf("The first differing byte in str1 is greater than in str2.\n");
	else
		printf("The first differing byte in str1 is less than in str2.\n");

	return 0;
}
