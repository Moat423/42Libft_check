/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:41:20 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/14 15:28:59 by lmeubrin         ###   ########.fr       */
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

int	main(void)
{
	strnstr_test_cases();
	isprint_test_cases();
	memchr_test_cases();
	atoi_test_cases();
	bzero_test_cases();
	strncmp_test_cases();
	calloc_test_cases();
	strdup_test_cases();
	itoa_test_cases();
	//strlcpy_test_cases();
	striteri_test_cases();
	strmapi_test_cases();
	//substr_test_cases();
	putchar_test_cases();
}
