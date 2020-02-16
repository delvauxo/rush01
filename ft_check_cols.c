/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cols.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:47:16 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/16 17:55:52 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	**ft_map_init(void);

char	**ft_check_cols()
{
	char	**box;
	
	box = ft_map_init();
	
	int i;
	int j;

	// Check cols.
	i = 1;
	j = 0;
	while (i < 5)
	{
		if (box[i][j] == '4')
		{
			if (box[i][j + 5] == '1')
			{
				while (j++ < 5)
				{
					box[i][j] = j + '0';
				}
			}
		}
		i++;
		j = 0;
	}
	return (box);
}
