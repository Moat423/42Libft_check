/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_check.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:04:42 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/10 15:42:49 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"
#include <unistd.h>

/*i guess this doesn't work because strdup hase the same problem as anything
* else in that it can not iterate over this hard coded string, because it 
* is only one address, and not an array */

static char	ft_rot(unsigned int i, char c)
{
	(void) i;
	if (ft_isalpha(c) == 0)
	{
		write (1, &c, 1);
	}
	else if ((c <= 85 && c >= 'A') || (c <= 117 && c >= 'a'))
	{
		(c += 5);
		write (1, &c, 1);
	}
	else
	{
		(c -= 21);
		write (1, &c, 1);
	}
	return (c);
}

int	strmapi_test_cases(void)
{
	char			*s;
	char			*arr_s;

	printf(COLOR_BLUE "strmapi\n" COLOR_RESET);
	s = "Rnpu cebwrpg bs gur 97 Pbzzba Pber pbagnvaf na rapbqrq uvag. Sbe";
	arr_s = strdup(s);
	arr_s = ft_strmapi(arr_s, &ft_rot);
	printf("%s\n", arr_s);
	free(arr_s);
	return (1);
}
