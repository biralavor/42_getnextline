/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:43:28 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/04 16:18:49 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*ptr;

	fd = open("Mussum.txt", O_RDONLY);
	ptr = "earlier ptr";
	ptr = get_next_line(fd);
	printf("actual line at ptr = %s", ptr);
	close(fd);
	free(ptr);
	return (0);
}
