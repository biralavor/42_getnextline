/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umeneses <umeneses@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:20:08 by umeneses          #+#    #+#             */
/*   Updated: 2023/09/26 18:55:45 by umeneses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
/* Mandatory Libraries */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list	t_char;
struct s_list
{
	char	c;
	t_char	*next;
};

typedef struct s_file_info
{
	int		index;
	int		read;
	int		len;
	int		fd;
	char	buffer[BUFFER_SIZE];
	t_char	*str;
}			t_file_info;

char	*get_next_line(int fd);
char	*ft_get_line(t_file_info *file);
char	*ft_join_line(t_file_info *file);
/* get_next_line main prototype functions */

t_char	*ft_get_let(char let);
void	ft_join_let(t_char **head, t_char *new_let);
void	ft_lstclear(t_char **lst, void (*del)(void *));
void	ft_lstdelone(t_char *lst, void (*del)(void*));
char	*ft_clear_nodes(t_char *str);
/* get_next_line_utils prototype functions */

void	*ft_calloc(size_t n_items, size_t size);
void	*ft_memset(void *str, int c, size_t size);
/* libft prototype functions */

#endif