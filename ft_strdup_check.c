/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:41:42 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/08 12:06:11 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"
//this test is not working, don't use it!!!!!!!!

int	strdup_test_cases(void)
{
	const char	s1[] = "Hello";
	const char	s2[] = "";

	printf(COLOR_BLUE "strdup\n" COLOR_RESET);
	if (ft_memcmp(ft_strdup(s1), strdup(s1), ft_strlen(s1)) == 0)
		printf(COLOR_GREEN "PASS1\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL1\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strdup=%s got=%s\n" COLOR_RESET, strdup(s1), ft_strdup(s1));
	}
	if (ft_memcmp(ft_strdup(s2), strdup(s2) ,ft_strlen(s2)) == 0)
		printf(COLOR_GREEN "PASS2\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL2\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strdup=%s got=%s\n" COLOR_RESET, strdup(s2), ft_strdup(s2));
	}
	return (1);
}
