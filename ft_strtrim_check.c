/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 12:25:48 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/16 12:30:48 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

int	strtrim_test_cases(void)
{
	char	s1[] = "ababbSimon is happyaab";
	char	s2[] = "";
	char *s3 = "  \t \t \n   \n\n\n\t";
	char	s4[] = "ababab ababbbbabb";
	char	set1[] = "ab ";
	char	set2[] = "";

	printf("str: %s, set: %s\n", s1, set1);
	printf("strtrim: %s\n", ft_strtrim(s1, set1));
	printf("str: %s, set: %s\n", s2, set2);
	printf("strtrim: %s\n", ft_strtrim(s2, set2));
	printf("str: %s, set: %s\n", s1, set2);
	printf("strtrim: %s\n", ft_strtrim(s1, set2));
	printf("str: %s, set: %s\n", s2, set1);
	printf("strtrim: %s\n", ft_strtrim(s2, set1));
	printf("str: %s, set: %s\n", s4, set1);
	printf("strtrim: %s\n", ft_strtrim(s4, set1));
	printf("str: %s, set: %s\n", s3, " \n\t");
	printf("strtrim: %s\n", ft_strtrim(s3, " \n\t"));
	return (0);
}
