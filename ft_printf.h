/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlegaler <dlegaler@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 11:37:46 by dlegaler          #+#    #+#             */
/*   Updated: 2026/11/24 11:42:11 by dlegaler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_putchar(int c);
void	ft_puthex(unsigned long long int n, char format);
void	ft_putnbr(int nb);
void	ft_putstr(const char *s);

#endif
