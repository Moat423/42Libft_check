/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:32:05 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/14 17:15:34 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

void	print_free(char **result)
{
	int		arr_i = 0;

	if (result)
	{
		while (result[arr_i])
			printf("{%s}, ", result[arr_i++]);
		arr_i = 0;
		while (result[arr_i])
			free(result[arr_i++]);
		free(result);
	}
	printf("\n");

}

int	split_test_cases(void)
{
	char	*s1 = "Star struck gamble";
	char	sep1 = ' ';
	//char	*expected1[] = (char *[]) {"Star", "struck" "gamble", NULL};
	char	**result;
	
	printf(COLOR_BLUE "split\n" COLOR_RESET);
	result = ft_split(s1, sep1);
	print_free(result);
	result = ft_split("hello!zzzzzzzz", 'z');
	print_free(result);
	result = ft_split("      split       this for   me  !       ", ' ');
	print_free(result);
	return (0);
}
/*
typedef	struct
{
	char	*input;
	char	*comment;
	char	**result;
	char	**expected;
	char	seperator;
} test;
*/
void free_string_array(char **array)
{
	int i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}
/*
int compare_string_arrays(char **result, char **expected)
{
	int i = 0;
	printf("result arr[%d]: %s\n", i, result[i]);
	printf("expected arr[%d]: %s\n", i, result[i]);
	while (*result[i] && *expected[i])
	{
		printf("result arr[%d]: %s\n", i, result[i]);
		printf("expected arr[%d]: %s\n", i, result[i]);
		if (strcmp(result[i], expected[i]) != 0)
		{
			return 0; // Strings are not the same
		}
		i++;
	}
	// Check if both arrays ended
	if (result[i] != NULL || expected[i] != NULL)
	{
		return 0; // One of the arrays has more elements
	}
	return 1; // Arrays are identical
}

int	split_test_cases(void)
{
	int		fail_counter = 0;
	test	tests[8];
	unsigned int	i = 0;

	tests[0].input = "Star struck gamble";
	tests[0].comment = "Normal string";
	tests[0].seperator = ' ';
	tests[0].result = ft_split(tests[0].input, tests[0].seperator);
	tests[0].expected = (char *[]) {"Star", "struck" "gamble", NULL};

	tests[1].input = "";
	tests[1].comment = "Empty string";
	tests[1].seperator = ' ';
	tests[1].result = ft_split(tests[0].input, tests[0].seperator);
	tests[1].expected = (char *[]) {"", NULL};

	tests[2].input = "1";
	tests[2].comment = "One numeric char";
	tests[2].seperator = ' ';
	tests[2].result = ft_split(tests[0].input, tests[0].seperator);
	tests[2].expected = (char *[]) {"1", NULL};

	tests[3].input = "+35ggoglatte";
	tests[3].comment = "seperator multiple g";
	tests[3].seperator = 'g';
	tests[3].result = ft_split(tests[0].input, tests[0].seperator);
	tests[3].expected = (char *[]) {"+35", "o", "latte"};

	tests[4].input = "  ";
	tests[4].comment = "Only spaces";
	tests[4].seperator = ' ';
	tests[4].result = ft_split(tests[0].input, tests[0].seperator);
	tests[1].expected = (char *[]) {"", NULL};

	tests[5].input = "-9384\054";
	tests[5].comment = "NULL Character seperator";
	tests[5].seperator = '\0';
	tests[5].result = ft_split(tests[0].input, tests[0].seperator);
	tests[1].expected = (char *[]) {"-9384", NULL};

	tests[6].input = "   84";
	tests[6].comment = "preceeding spaces";
	tests[6].seperator = ' ';
	tests[6].result = ft_split(tests[0].input, tests[0].seperator);
	tests[1].expected = (char *[]) {"84", NULL};

	tests[7].input = "84   ";
	tests[7].comment = "Trailing spaces";
	tests[7].seperator = ' ';
	tests[7].result = ft_split(tests[0].input, tests[0].seperator);
	tests[1].expected = (char *[]) {"84", NULL};
	printf(COLOR_BLUE "ft_split\n" COLOR_RESET);

	while (i <= 7)
	{
		if (compare_string_arrays(tests[i].result, tests[i].expected))
		{
			printf(COLOR_GREEN "PASS\n" COLOR_RESET);
		}
		else
		{
			printf(COLOR_RED "FAIL Test %u\n" COLOR_RESET, i + 1);
			printf(COLOR_RED "%s\n" COLOR_RESET, tests[i].comment);
			fail_counter++;
		}

		// Free allocated memory
		free_string_array(tests[i].result);
	}
	return fail_counter;
}
*/
