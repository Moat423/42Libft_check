/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testformemchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:20:30 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/04/26 15:35:01 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char		c_c;
	char		*c_s;
	size_t		n;

	n = 18;
	c_c = 'z';
	c_s = "Hello World!";
	printf("c_s: %s\n", c_s);
	while ((*c_s != c_c) && (n > 0) && *c_s)
	{
		++c_s;
		printf("c_s: %s\n", c_s);
		printf("*c_s: %c\n", *c_s);
		printf("*c_s as int: %d\n", *c_s);
		n--;
	}
}
