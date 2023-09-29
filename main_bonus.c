/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:43:28 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/29 15:42:22 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	int		fd2;
	int		fd3;
	int		index;
	char	*ptr;
	char	*ptr2;
	char	*ptr3;

	fd = open("Mussum.txt", O_RDONLY);
	fd2 = open("big_line_with_nl", O_RDONLY);
	fd3 = open("alternate_line_nl_with_nl", O_RDONLY);
	ptr = "/// Reading file 'Mussum.txt' ///";
	ptr2 = "/// Reading file 'big line with nl' ///";
	ptr3 = "/// Reading file 'alternate_line_nl_with_nl' ///";
	printf("\033[0;36m");
	printf("\n%s and %s and %s\n\n", ptr, ptr2, ptr3);
	index = 0;
	while (ptr || ptr2 || ptr3)
	{
		printf("\033[0;36m");
		printf("ptr GNL line %i = ", index);
		printf("\033[0;33m");
		ptr = get_next_line(fd);
		printf("%s", ptr);
		free (ptr);
		printf("ptr 2 GNL line %i = ", index);
		printf("\033[0;33m");
		ptr2 = get_next_line(fd2);
		printf("%s", ptr2);
		free(ptr2);
		printf("ptr3 GNL line %i = ", index);
		printf("\033[0;33m");
		ptr3 = get_next_line(fd3);
		printf("%s", ptr3);
		free(ptr3);
		index++;
	}
	close (fd);
	return (0);
}
