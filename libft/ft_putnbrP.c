/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrP.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpimenta <mpimenta@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 22:02:47 by mpimenta          #+#    #+#             */
/*   Updated: 2022/06/19 22:06:08 by mpimenta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbrP(void *nb, char *hexa)
{
	int	len;
	char	*str;
	unsigned long	nbr;

	nbr = (unsigned long) nb;
	str = ft_itoa_h(nbr, hexa);
	len = ft_putstr_fd(str, 1);
	free(str);
	return (len);
}
