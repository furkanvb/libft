/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuyar <fuyar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:58:42 by fuyar             #+#    #+#             */
/*   Updated: 2023/10/12 15:58:51 by fuyar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	n;
	int	neg;
	int	res;

	n = 0;
	res = 0;
	neg = 1;
	while (str[n] == ' ' || (str[n] >= '\t' && str[n] <= '\r'))
		n++;
	if (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			neg = -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		res = (str[n] - '0') + (res * 10);
		n++;
	}
	return (res * neg);
}
