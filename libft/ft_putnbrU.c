/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrU.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:02:37 by mpimenta          #+#    #+#             */
/*   Updated: 2022/06/19 21:10:24 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrU(unsigned int nb)
{
	int	len;
	char	*str;

	str = ft_itoa_u(nb);
	len = ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
