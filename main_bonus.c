/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:43:28 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/29 14:48:05 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	int		fd2;
	int		index;
	char	*ptr;
	char	*ptr2;

	fd = open("Mussum.txt", O_RDONLY);
	fd2 = open("big_line_with_nl", O_RDONLY);
	ptr = "/// Reading file 'Mussum.txt' ///";
	ptr2 = "/// Reading file 'big line with nl' ///";
	printf("\033[0;36m");
	printf("\n%s and %s\n\n", ptr, ptr2);
	index = 0;
	while (ptr || ptr2)
	{
		printf("\033[0;36m");
		printf("GNL line ptr %i = ", index);
		printf("\033[0;33m");
		ptr = get_next_line(fd);
		printf("%s", ptr);
		free (ptr);
		printf("GNL line ptr2 %i = ", index);
		printf("\033[0;33m");
		ptr2 = get_next_line(fd2);
		printf("%s", ptr2);
		free(ptr2);
		index++;
	}
	close (fd);
	return (0);
}
