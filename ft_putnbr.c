/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlegaler <dlegaler@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 11:16:25 by dlegaler          #+#    #+#             */
/*   Updated: 2026/11/24 11:42:52 by dlegaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putnbr(long n, char format)
{
	char	c;

	if (n < 0 && format != 'u')
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10, format);
	n = n % 10;
	c = n + '0';
	write (1, &c, 1);
}

/*int	main(void)
{

	ft_putnbr(INT_MIN, 'd');
}*/
