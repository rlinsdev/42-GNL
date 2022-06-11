/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 12:49:19 by rlins             #+#    #+#             */
/*   Updated: 2022/06/10 23:54:35 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

//gcc -Wall -Werror -Wextra -D BUFFER_SIZE=10 get_next_line.c get_next_line_utils.c main.c && ./a.out
//valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./a.out

int main(void)
{
	int   fd;
	char  *line;

  // Open the file - read only
	fd = open("teste.txt", O_RDONLY);

  // Ethernal loop, until break condition
  while (1)
  {
    line = get_next_line(fd);
    if (line == NULL)
    {
      break;
    }

    printf("%s", line);
  }
  return (0);
}
