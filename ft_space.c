/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 18:06:25 by amasol            #+#    #+#             */
/*   Updated: 2017/11/27 18:12:55 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_space(char str)
{
	if (str == '\n' || str == ' ' || str == '\t' || str == '\f' ||
			str == '\r' || str == '\v')
		return (1);
	else
		return (0);
}
