/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:44:23 by arahmoun          #+#    #+#             */
/*   Updated: 2022/11/07 20:44:29 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_strlen(const char *str);
int	ft_putstr(const char *str);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned int n);
int	ft_printhexa(unsigned long n, const char *h);

#endif
