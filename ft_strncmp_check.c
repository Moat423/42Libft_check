/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:58:03 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/07 20:50:11 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

int	strncmp_test_cases(void)
{
	char	s1[] = "Hello World";
	char	s2[] = "Hello World0";
	char	s3[] = "Heli";
	char	s4[] = "Hallo";

	printf(COLOR_BLUE "\nstrncmp\n" COLOR_RESET);
	if (ft_strncmp(s1, s2, 2) == strncmp(s1, s2, 2))
		printf(COLOR_GREEN "PASS\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL 1\n" COLOR_RESET);
		printf(COLOR_BLUE "expected real=%d got=%d\n" COLOR_RESET, strncmp(s1, s2, 2), ft_strncmp(s1, s2, 2));
	};
	if (ft_strncmp(s1, s3, 3) == strncmp(s1, s3, 3))
		printf(COLOR_GREEN "PASS\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL 2\n" COLOR_RESET);
		printf(COLOR_BLUE "expected real=%d got=%d\n" COLOR_RESET, strncmp(s1, s3, 3), ft_strncmp(s1, s3, 3));
	};
	if (ft_strncmp(s1, s1, 5) == strncmp(s1, s1, 5))
		printf(COLOR_GREEN "PASS\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL 3\n" COLOR_RESET);
		printf(COLOR_BLUE "expected real=%d got=%d\n" COLOR_RESET, strncmp(s1, s1, 5), ft_strncmp(s1, s1, 5));
	};
	if (ft_strncmp(s1, s4, 6) == strncmp(s1, s4, 6))
		printf(COLOR_GREEN "PASS\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL 4\n" COLOR_RESET);
		printf(COLOR_BLUE "expected real=%d got=%d\n" COLOR_RESET, strncmp(s1, s4, 6), ft_strncmp(s1, s4, 6));
	};
	return (1);
}
