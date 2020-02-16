/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:30:12 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/16 21:27:42 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
int		ft_check_main_args(void);
char	**ft_map_init(void);
char	**ft_check_cols(void);
char	**ft_check_rows(void);
void	ft_map_print(void);

int	main(int argc,char **argv)
{
	if(argc != 2)
		return (0);
	if (ft_check_main_args())
	{
		ft_map_init();
		ft_check_cols();
		ft_check_rows();
		ft_map_print();
	}
	return (0);
}
