/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:00:15 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/07 20:46:03 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

int	calloc_test_cases(void)
{
	size_t					i;
	size_t					j;
	unsigned long long int	needed_space;

	i = 0;
	j = 0;
	typedef struct s_TestCase {
		size_t num_elements;
		size_t size_of_element;
	}t_testcase;

	t_testcase cases_calloc[] = {
		{5, sizeof(int)},    // Test Case 1: Array of integers
		{3, sizeof(char)},      // Test Case 2: Array of characters
		{0, sizeof(double)},            // Test Case 3: Zero elements
		{65535, 2} //going over sizelimit should return NULL
	};

	printf(COLOR_BLUE "calloc\n" COLOR_RESET);
	while (i < 4)
	{
		needed_space = cases_calloc[i].num_elements * cases_calloc[i].size_of_element;
		// Allocate memory using calloc
		void *ptr = ft_calloc(cases_calloc[i].num_elements, cases_calloc[i].size_of_element);
		void *real_ptr = calloc(cases_calloc[i].num_elements, cases_calloc[i].size_of_element);

		if (ptr == NULL && real_ptr != NULL)
		{
			printf("Case %lu: " COLOR_RED "FAIL (Memory allocation failed)\n" COLOR_RESET, i + 1);
			continue;
		}
		else if (ptr == NULL && real_ptr == NULL)
		{
			printf("Case %lu: " COLOR_GREEN "PASS\n" COLOR_RESET, i + 1);
			continue;
		}
		else if (ptr != NULL && real_ptr == NULL)
		{
			printf("Case %lu: " COLOR_RED "FAIL (calloc returned NULL but you didn't)\n" COLOR_RESET, i + 1);
			continue;
		}
		// Print the allocated memory
		if (memcmp (ptr, real_ptr, needed_space) == 0)
			printf("Case %lu: " COLOR_GREEN "PASS\n" COLOR_RESET, i + 1);
		else
		{
            printf("Case %lu: " COLOR_RED "FAIL\n" COLOR_RESET, i + 1);
            printf(COLOR_BLUE "expected calloc=%s got=%s\n" COLOR_RESET, (char *)real_ptr, (char *)ptr);
		printf("	Allocated memory: ");
		while (j < cases_calloc[i].num_elements * cases_calloc[i].size_of_element)
		{
			printf("%c,", *((char *)ptr + j++));
		}
		printf("\n");
		}

		// Free the allocated memory
		free(ptr);
	i++;
	j = 0;
	}
	return (0);
}
