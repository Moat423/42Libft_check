/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:41:20 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/16 12:31:46 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

int	memchr_test_cases(void);
int	strnstr_test_cases(void);
int	isprint_test_cases(void);
int	atoi_test_cases(void);
int	bzero_test_cases(void);
int	strncmp_test_cases(void);
int	calloc_test_cases(void);
int	strdup_test_cases(void);
int	substr_test_cases(void);
int	strlcpy_test_cases(void);
int	striteri_test_cases(void);
int	strmapi_test_cases(void);
int	putchar_test_cases(void);
int	itoa_test_cases(void);
int	split_test_cases(void);
int	memcmp_test_cases(void);
int	strtrim_test_cases(void);

int	main(void)
{
	strnstr_test_cases();
	isprint_test_cases();
	memchr_test_cases();
	atoi_test_cases();
	bzero_test_cases();
	strncmp_test_cases();
	calloc_test_cases();
	//strdup_test_cases(); don't use this test, it is not working yet!
	//strlcpy_test_cases();
	itoa_test_cases();
	striteri_test_cases();
	strmapi_test_cases();
	memcmp_test_cases();
	//substr_test_cases();
	strtrim_test_cases();
	putchar_test_cases();
	split_test_cases();
	return 0;
}
