/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:39:44 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/16 18:10:42 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char **ft_map_init(void);
char **ft_check_cols(void);
char **ft_check_rows(void);

void	ft_putchar(char c);

void	ft_map_print()
{
	char	**box;

	box = ft_map_init();
	box = ft_check_cols();
	box = ft_check_rows();

	int i;
	int j;

	i = 1;
	j = 1;
	while (j < 5)
	{
		while (i < 5)
		{
			if (i > 1 && i < 5)
			{
				ft_putchar(' ');
			}
			ft_putchar(box[i][j]);
			i++;
		}
		ft_putchar('\n');
		i = 1;
		j++;
	}
}
