/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlegaler <dlegaler@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 11:42:26 by dlegaler          #+#    #+#             */
/*   Updated: 2026/11/24 11:42:25 by dlegaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_puthex(unsigned long long int n, char format)
{
	char	*base;

	if (format == 'x' || format == 'p')
		base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (format == 'p')
		write(1, "0x", 2);
	write (1, &base[n / 16], 1);
	write (1, &base[n % 16], 1);
}

/*int	main(void)
{
	void *a;
	int	x;	

	a = malloc(sizeof(int));
	x = 120;
	*(int *)a = x;
	ft_puthex(*(unsigned long long int *)a, 'p');
}*/
