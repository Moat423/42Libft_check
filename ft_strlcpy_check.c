/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:42:10 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/15 09:54:35 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _BSD_SOURCE
#include <string.h>
#include <stdio.h>
#include "libft_check.h"

/* this test needs WORK!!!*/

int	strlcpy_test_cases(void)
{
	char	*s1;
	char	*s11;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*s6;

	s1 = "Krass";
	s2 = "";
	s11 = "";
	s3 = "huhu";
	s4 = "";
	s5 = "hu";
	s6 = NULL;

	printf(COLOR_BLUE "strlcpy\n" COLOR_RESET);

	if ((ft_strlcpy(s2, s1, 5) == strlcpy(s11, s1, 5)) && (ft_memcmp(s1, s11, ft_strlen(s1)) == 0))
		printf(COLOR_GREEN "PASS1\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL1\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strlcpy=%s got=%s\n" COLOR_RESET, strdup(s1), ft_strdup(s1));
	}

	if ((ft_strlcpy(s4, s3, 2) == strlcpy(s5, s3, 2)) && (ft_memcmp(s5, "hu", 2) == 0))
		printf(COLOR_GREEN "PASS2\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL2\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strlcpy=%s got=%s\n" COLOR_RESET, "hu", ft_strdup(s5));
	}

	if ((ft_strlcpy(s6, s1, 0) == strlcpy(s11, s1, 0)) && (ft_memcmp(s11, "", 0) == 0))
		printf(COLOR_GREEN "PASS3\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL3\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strlcpy=%s got=%s\n" COLOR_RESET, "", ft_strdup(s11));
	}

	return (1);
}

