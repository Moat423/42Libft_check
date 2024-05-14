/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:08:14 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/06 10:28:23 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

int	strnstr_test_cases(void)
{
	char	s1[]="HELLO\0NO";
	char	s2[]= "NO";
	char	s3[]= "";
	char	s4[]= "ELL";

	printf(COLOR_BLUE "\nstrnstr\n" COLOR_RESET);
	if (ft_strnstr(s1, s2, 0) == NULL)
		printf(COLOR_GREEN "\nPASS 0\n" COLOR_RESET);
	else
		printf(COLOR_RED "\nFAIL 0\n" COLOR_RESET);
	if (ft_strnstr(s1, s4, 8) == (s1 + 1))
		printf(COLOR_GREEN "\nPASS found\n" COLOR_RESET);
	else
		printf(COLOR_RED "\nFAIL found\n" COLOR_RESET);
	if (ft_strnstr(s1, s2, 8) == NULL)
		printf(COLOR_GREEN "\nPASS should not find\n" COLOR_RESET);
	else
		printf(COLOR_RED "\nFAIL should not find\n" COLOR_RESET);
	if (ft_strnstr(s1, s3, 8) == s1)
		printf(COLOR_GREEN "\nPASS empty\n" COLOR_RESET);
	else
		printf(COLOR_RED "\nFAIL empty\n" COLOR_RESET);
	if (ft_strnstr(s3, s2, 8) == NULL)
		printf(COLOR_GREEN "\nPASS empty1\n" COLOR_RESET);
	else
		printf(COLOR_RED "\nFAIL empty1\n" COLOR_RESET);
	printf(COLOR_BLUE "\nstrnstr complete\n" COLOR_RESET);
	return (1);
}
