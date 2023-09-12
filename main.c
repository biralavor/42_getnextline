/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:43:28 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/12 17:26:54 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "fcntl.h"
#include "stdio.h"

int	main(void)
{
	int		fd;
	char	*ptr;

	fd = open("Mussum_only.txt", O_RDONLY);
	while (*ptr)
	{
		printf("\033[0;33m");
		ptr = get_next_line(fd);
		free (ptr);
	}
	close (fd);
	return (0);
}
