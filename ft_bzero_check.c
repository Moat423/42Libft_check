/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:17:15 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/08 14:05:49 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

/* 
 * !!!for myself !!!
 * bzero segfaults by defaut when it gets a NULL pointer. 
 * so in the future I would like to instead just give an error instead of crashing*/

int	bzero_test_cases(void)
{
	size_t i;
	char buffer[10]; // Adjust size according to the largest buffer in your test cases
	char buffer1[10]; // Adjust size according to the largest buffer in your test cases

	typedef struct s_TestCase 
	{
		const char	*input;
		size_t length;
		const char	*expected_output;
	} t_testcase;

	i = 0;
	t_testcase cases_bzero[] = {
		{"Hello", 0, "Hello"},             // Test Case 1: Zero-length buffer
        {"Hello", sizeof("Hello"), "\0\0\0\0\0"}, // Test Case 2: Non-zero length buffer
        {"Hello", sizeof("Hello"), "He\0\0\0"}, // Test Case 3
	};
	printf(COLOR_BLUE "bzero\n" COLOR_RESET);
	while (i < sizeof(cases_bzero) / sizeof(cases_bzero[0]))
	{
		strncpy(buffer, cases_bzero[i].input, 6);
		strncpy(buffer1, cases_bzero[i].input, 6);
		bzero(buffer, cases_bzero[i].length);
		ft_bzero(buffer1, cases_bzero[i].length);
		if (memcmp(buffer, buffer1, 5) == 0) {
            printf("Case %lu: " COLOR_GREEN "PASS\n" COLOR_RESET, i++);
        } else
		{
            printf("Case %lu: " COLOR_RED "FAIL\n" COLOR_RESET, i++);
            printf(COLOR_BLUE "expected bzero=%s got=%s\n" COLOR_RESET, buffer, buffer1);
		}
	}
	bzero(buffer + 2, 3);
	ft_bzero(buffer1 + 2, 3);
	if (memcmp(buffer, buffer1, 5) == 0) {
		printf("Case %lu: " COLOR_GREEN "PASS\n" COLOR_RESET, i++);
	} else
	{
		printf("Case %lu: " COLOR_RED "FAIL\n" COLOR_RESET, i++);
		printf(COLOR_BLUE "expected bzero=%s got=%s\n" COLOR_RESET, buffer, buffer1);
	}
	return (0);
}
