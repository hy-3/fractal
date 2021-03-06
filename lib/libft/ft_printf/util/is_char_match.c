/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_char_match.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:22:25 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/23 11:24:34 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char_match(char c, char *list)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (list[i] != '\0')
	{
		if (list[i] == c)
			res = 1;
		i++;
	}
	return (res);
}
