/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacem <bacem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:37:30 by bacem             #+#    #+#             */
/*   Updated: 2024/10/06 10:38:02 by bacem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

// Main ft_printf function
int     ft_printf(const char *format, ...);

// Helper functions
int     ft_print_char(char c);
int     ft_print_str(char *str);
int     ft_print_ptr(void *ptr);
int     ft_printnbr(int nb);
int     ft_print_unsigned(unsigned int n);
int     ft_print_hex(unsigned long n, int uppercase);

#endif
