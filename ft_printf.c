/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlegaler <dlegaler@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 11:44:33 by dlegaler          #+#    #+#             */
/*   Updated: 2026/11/24 13:37:32 by dlegaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *str, ...)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			write (1, &str[i], 1);
		if (str[i] == '%')
			i++;
		if (str[i] == '%' && str[i - 1] == '%')
			write (1, "%", 1);
		if (str[i] == 'd' && str[i - 1] == '%')
			ft_putnbr(str[i]);
		if (str[i] == 'c' && str[i - 1] == '%')
			ft_putchar(str[i])

		i++; 
	}
}
