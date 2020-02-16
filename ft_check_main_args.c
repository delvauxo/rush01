/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_main_args.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:26:48 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/16 21:49:24 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
	
int	ft_check_main_args(void)
{
	char tab[31];
	int i;

	i = 0;
	while (tab[i])
	{
		if (!((i % 2 == 0)  && (tab[i] >= '1' && tab[i] <= '4')))
		{
			ft_putstr("Error1\n");
			return (0);
		}
		else if (!(i % 2 == 1) && !(tab[i] == ' '))
		{
			ft_putstr("Error2\n");
			return (0);
		}
		i++;
	}
	return (1);
}
