/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgimeno <pgimeno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:53:24 by pgimeno           #+#    #+#             */
/*   Updated: 2024/06/25 14:48:27 by pgimeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

void	read_files(int argc, char **argv)
{
	static	int files[1024];
	static	int count = 0;
	char	*line;
	int	char_count;
	int	i = 1;

	files[0] = -1;
	// OPEN ALL FILES
	while (i <= argc - 1)
	{
		files[i] = open(argv[i], O_RDONLY);
		files[i + 1] = -1;
		i++;
	}

	i = 1;
	while (files[i] != -1)
	{
		char_count = 0;
		while ((line = get_next_line(files[i])))
		{
			if (line)
				count++;
			printf("[%d,%d] Line:", i, count);
			char_count += printf("%s", line);
			free(line);
		}
		printf("\nTotal Lines: %d\nTotal Chars: %d\nWith buffer: %d\n\n", count, char_count, BUFFER_SIZE);
		/*printf("\nIs everything looking good?\n");
		line = get_next_line(1);
		if (strcmp(line, "y") == 1)
			printf("Good! =D\n\n");
		else
			printf("D:\n");*/
		char_count = 0;
		count = 0;
		i++;
	}

	// CLOSES ALL FILES WHEN DONE
	i = 0;
	while (files[i] != -1)
	{
		close(files[i]);
		i++;
		if (files[i] == -1)
			return ;
	}
}

int main(int argc, char **argv)
{
	int fd1;
	char *line;
	int	count;
	int	char_count;

	read_files(argc, argv);
	return (0);
}
