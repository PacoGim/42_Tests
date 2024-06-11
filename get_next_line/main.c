/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgimeno <pgimeno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:53:24 by pgimeno           #+#    #+#             */
/*   Updated: 2024/06/11 08:52:22 by pgimeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int	file;
	int	count;
	char	*line;
	int	lines_to_read = 10;

	count = 0;
	file = open(argv[1], O_RDWR);
	while ((line = get_next_line(file)))
	{
		count++;
		printf("%s", line);
		free(line);
	}
	printf("---------- EOF ----------");
	printf("\nLine Count: %d\n", count);
	printf("BUFFER SIZE: %d\n", BUFFER_SIZE);
	close(file);
	return (0);
	while (lines_to_read != 0)
	{
		line = get_next_line(1);
		printf("%s", line);
		lines_to_read--;
		free(line);
	}
	return (0);
}
