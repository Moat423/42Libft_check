/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_check.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 10:58:44 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/13 12:34:48 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_check.h"
#include <stdio.h>

int	putchar_test_cases(void)
{
	int		fd;
	char	*str = "putchar fd passed";
	char	buff[20];
	size_t	bytes_read;

	bytes_read = 1;
	printf(COLOR_BLUE "putchar_fd\n" COLOR_RESET);

	fd = open("./putchar.txt", O_RDWR | O_CREAT, 0640);
	if (fd == -1)
	{
		printf("failure to open file");
		return (-1);
	}
	while (*str)
		ft_putchar_fd(*(str++), fd);
	while (bytes_read != 0)
		bytes_read = read(fd, buff, 20);
	if (bytes_read >= 0)
	{
		buff[18] = '\0';
		printf("size read: %lu, document says: %s", bytes_read, buff);
	}
	else
		printf(COLOR_RED "FAIL\n" COLOR_RESET);
	close(fd);
	printf("\n");
	return (1);
}
