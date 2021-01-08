/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gomoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aromny-w <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:53:47 by aromny-w          #+#    #+#             */
/*   Updated: 2021/01/08 18:53:49 by aromny-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gomoku.h"

static void	print_usage(char *name)
{
	printf("Usage: %s\n", name);
}

void		gomoku(char **input)
{
	(void)input;
}

int			main(int argc, char **argv)
{
	if (argc > 1)
		gomoku(++argv);
	else
		print_usage(argv[0]);
	return (0);
}
