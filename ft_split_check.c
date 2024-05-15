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

typedef	struct
{
	char	*input;
	char	*comment;
	int		result;
	int		expected;
	char	seperator;
} test;

int	split_test_cases(void)
{
		int		fail_counter = 0;
	int		*counter = &fail_counter;
	test	tests[8];											//UPDATE HERE TOO!

	tests[0].input = "Star struck gamble";
	tests[0].comment = "Normal string";
	tests[0].result = ft_split(tests[0].input, tests[0].seperator);
	tests[0].expected = {"Star", "struck" "gamble"};

	tests[1].input = "";
	tests[1].comment = "Empty string";
	tests[1].result = ft_split(tests[0].input, 'c');
	tests[1].expected = atoi(tests[0].input);

	tests[2].input = "1";
	tests[2].comment = "One numeric char";
	tests[2].result = ft_split(tests[0].input);
	tests[2].expected = atoi(tests[0].input);

	tests[3].input = "+35";
	tests[3].comment = "One plus sign";
	tests[3].result = ft_split(tests[0].input);
	tests[3].expected = atoi(tests[0].input);

	tests[4].input = "  ";
	tests[4].comment = "Only spaces";
	tests[4].result = ft_split(tests[0].input);
	tests[4].expected = atoi(tests[0].input);

	tests[5].input = "-9384";
	tests[5].comment = "Minus sign";
	tests[5].result = ft_split(tests[0].input);
	tests[5].expected = atoi(tests[0].input);

	tests[6].input = "   84";
	tests[6].comment = "Trailing spaces";
	tests[6].result = ft_split(tests[0].input);
	tests[6].expected = atoi(tests[0].input);

	tests[7].input = "84   ";
	tests[7].comment = "Trailing spaces";
	tests[7].result = ft_split(tests[0].input);
	tests[7].expected = atoi(tests[0].input);

	tests[7].input = " 84  ";
	tests[7].comment = "Trailing spaces";
	tests[7].result = ft_split(tests[0].input);
	tests[7].expected = atoi(tests[0].input);

	printf(COLOR_BLUE "ft_split\n" COLOR_RESET);
}