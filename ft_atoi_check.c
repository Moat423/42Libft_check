/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:22:34 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/06 19:49:57 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

int	atoi_test_cases(void)
{
	char	str1[]="  +4580954";
	char	str2[]="-  29300448";
	char	str3[]="0";
	char	str4[]="";
	char	str5[]=" -8j8 9";
	char	str6[]="	-2147483648";

	printf(COLOR_BLUE "\natoi\n" COLOR_RESET);
	if (ft_atoi(str1) == atoi(str1))
		printf(COLOR_GREEN "PASS\n" COLOR_RESET);
	else
		printf(COLOR_RED "FAIL nb=%s\n" COLOR_RESET, str1);
	if (ft_atoi(str2) == atoi(str2))
		printf(COLOR_GREEN "PASS\n" COLOR_RESET);
	else
		printf(COLOR_RED "FAIL nb=%s\n" COLOR_RESET, str2);
	if (ft_atoi(str3) == atoi(str3))
		printf(COLOR_GREEN "PASS\n" COLOR_RESET);
	else
		printf(COLOR_RED "FAIL nb=%s\n" COLOR_RESET, str3);
	if (ft_atoi(str4) == atoi(str4))
		printf(COLOR_GREEN "PASS\n" COLOR_RESET);
	else
		printf(COLOR_RED "FAIL nb=%s\n" COLOR_RESET, str4);
	if (ft_atoi(str5) == atoi(str5))
		printf(COLOR_GREEN "PASS\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL nb=%s\n" COLOR_RESET, str5);
		printf(COLOR_BLUE "expected atoi=%d got=%d\n" COLOR_RESET, atoi(str5), ft_atoi(str5));
	}
	if (ft_atoi(str6) == atoi(str6))
		printf(COLOR_GREEN "PASS\n" COLOR_RESET);
	else
	{
		printf(COLOR_RED "FAIL nb=%s\n" COLOR_RESET, str6);
		printf(COLOR_BLUE "expected atoi=%d got=%d\n" COLOR_RESET, atoi(str6), ft_atoi(str6));
	}
	return (0);
}
