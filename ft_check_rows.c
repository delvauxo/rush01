/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_rows.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:59:21 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/16 19:11:44 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	**ft_map_init(void);
char	**ft_check_cols();

char	**ft_check_rows()
{	
	char	**box;

	box = ft_check_cols();

	int i;
	int j;

	i = 0;
	j = 1;
	while (j < 5)
	{
		if (box[i][j] == '4')
		{
			if (box[i + 5][j] == '1')

			{
				while (i++ < 5)
				{
					box[i][j] = i + '0';
				}
			}
		}
		j++;
		i = 0;
	}
	return (box);
}
