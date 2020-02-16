/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odelvaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:35:41 by odelvaux          #+#    #+#             */
/*   Updated: 2020/02/16 21:05:53 by odelvaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_map_init(void)
{
	
	// Initialisation des box.
	char **box;

	box = (char **)malloc(7 * sizeof(char*));
	box[0] = (char *)malloc(7 * sizeof(char));
	box[1] = (char *)malloc(7 * sizeof(char));
	box[2] = (char *)malloc(7 * sizeof(char));
	box[3] = (char *)malloc(7 * sizeof(char));
	box[4] = (char *)malloc(7 * sizeof(char));
	box[5] = (char *)malloc(7 * sizeof(char));

	box[0][0] = '8';
	box[0][1] = '4';
	box[0][2] = '3';
	box[0][3] = '2';
	box[0][4] = '1';
	box[0][5] = '8';
	box[0][6] = '\0';

	box[1][0] = '4';
//	box[1][1] = '0';
//	box[1][2] = '0';
//	box[1][3] = '0';
//	box[1][4] = '0';
	box[1][5] = '1';
	box[1][6] = '\0';

	box[2][0] = '3';
//	box[2][1] = '0';
//	box[2][2] = '0';
//	box[2][3] = '0';
//	box[2][4] = '0';
	box[2][5] = '2';
	box[2][6] = '\0';

	box[3][0] = '2';
//	box[3][1] = '0';
//	box[3][2] = '0';
//	box[3][3] = '0';
//	box[3][4] = '0';
	box[3][5] = '2';
	box[3][6] = '\0';

	box[4][0] = '1';
//	box[4][1] = '0';
//	box[4][2] = '0';
//	box[4][3] = '0';
//	box[4][4] = '0';
	box[4][5] = '2';
	box[4][6] = '\0';

	box[5][0] = '8';
	box[5][1] = '1';
	box[5][2] = '2';
	box[5][3] = '2';
	box[5][4] = '2';
	box[5][5] = '8';
	box[5][6] = '\0';

	return (box);
}
