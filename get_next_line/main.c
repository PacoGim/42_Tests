/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgimeno <pgimeno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:53:24 by pgimeno           #+#    #+#             */
/*   Updated: 2024/06/10 13:38:49 by pgimeno          ###   ########.fr       */
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

	count = 0;
	file = open(argv[1], O_RDWR);
	while ((line = get_next_line(file)))
	{
		count++;
		printf("%s", line);
		free(line);
	}
	printf("\nLine Count: %d", count);
	close(file);
	return (0);
}
