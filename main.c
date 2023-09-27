/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:43:28 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/27 16:21:58 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	int		index;
	char	*ptr;

	fd = open("Mussum.txt", O_RDONLY);
	ptr = "/// Reading file 'Mussum.txt' ///";
	printf("\033[0;36m");
	printf("\n%s\n\n", ptr);
	index = 0;
	while (ptr)
	{
		printf("\033[0;36m");
		printf("GNL line %i = ", index);
		printf("\033[0;33m");
		ptr = get_next_line(fd);
		printf("%s", ptr);
		free (ptr);
		index++;
	}
	close (fd);
	return (0);
}
