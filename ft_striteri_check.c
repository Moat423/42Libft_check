/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:35:45 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/10 15:47:10 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"

static void	ft_rot(unsigned int i, char *c)
{
	(void) i;
	if (ft_isalpha(*c) == 0)
		return ;
	else if ((*c <= 85 && *c >= 'A') || (*c <= 117 && *c >= 'a'))
		*c += 5;
	else
		*c -= 21;
}

int	striteri_test_cases(void)
{
	char			*s;
	char			*arr_s;

	printf(COLOR_BLUE "striteri\n" COLOR_RESET);
	s = "Rnpu cebwrpg bs gur 97 Pbzzba Pber pbagnvaf na rapbqrq uvag. Sbe";
	arr_s = strdup(s);
	ft_striteri(&(*arr_s), &ft_rot);
	printf("%s\n", arr_s);
	return (1);
}
