/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:43:28 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/26 18:14:07 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*ptr;

	fd = open("big_line_with_nl", O_RDONLY);
	ptr = "/// Reading file 'big_line_with_nl' ///";
	printf("\033[0;36m");
	printf("\n%s\n\n", ptr);
	while (ptr)
	{
		printf("\033[0;33m");
		ptr = get_next_line(fd);
		printf("%s", ptr);
		free (ptr);
	}
	close (fd);
	return (0);
}
