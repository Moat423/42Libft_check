/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:42:10 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/15 11:34:33 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _BSD_SOURCE
#include <string.h>
#include <stdio.h>
#include "libft_check.h"

/* this test needs WORK!!!*/

int	strlcpy_test_cases(void)
{
	char	str[4] = "";
	char	str_real[4] = "";
	const char *source = "Hello World!";

	printf(COLOR_BLUE "strlcpy\n" COLOR_RESET);
	if ((ft_strlcpy(str, source, 0) == strlcpy(str_real, source, 0)) && (ft_memcmp(str, str_real, 0) == 0))
		printf(COLOR_GREEN "PASS0\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL0\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strlcpy=%s got=%s\n" COLOR_RESET, str_real, str);
	}
	if ((ft_strlcpy(str, "Krass", 5) == strlcpy(str_real, "Krass", 5)) && (ft_memcmp(str, str_real, strlen("Krass")) == 0))
		printf(COLOR_GREEN "PASS1\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL1\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strlcpy=%s got=%s\n" COLOR_RESET, str_real, str);
	}
	if ((ft_strlcpy(str, "huhu", 2) == strlcpy(str_real, "huhu", 2)) && (ft_memcmp(str, "hu", 2) == 0))
		printf(COLOR_GREEN "PASS2\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL2\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strlcpy=%s got=%s\n" COLOR_RESET, str_real, str);
	}
	if ((ft_strlcpy(NULL, "Krass", 0) == strlcpy(str_real, "Krass", 0)) && (ft_memcmp(str, str_real, 0) == 0))
		printf(COLOR_GREEN "PASS3\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL3\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strlcpy=%s got=%s\n" COLOR_RESET, str_real, str);
	}
	if ((ft_strlcpy(str, NULL, 0) == strlcpy(str_real, str, 0)) && (ft_memcmp(str_real, str, 0) == 0))
		printf(COLOR_GREEN "PASS3\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL3\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strlcpy=%s got=%s\n" COLOR_RESET, str_real, "");
	}
	if ((ft_strlcpy(str, "Krass", 3) == strlcpy(str_real, "Krass", 3)) && (ft_memcmp(str, str_real, 3) == 0))
		printf(COLOR_GREEN "PASS4\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL4\n" COLOR_RESET);
		printf(COLOR_BLUE "expected strlcpy=%s got=%s\n" COLOR_RESET, str_real, str);
	}
	return (1);
}



