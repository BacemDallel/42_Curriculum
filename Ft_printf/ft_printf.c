/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacem <bacem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:36:13 by bacem             #+#    #+#             */
/*   Updated: 2024/10/06 10:38:23 by bacem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%') // Handle format specifier
        {
            format++;
            if (*format == 'c')
                count += ft_print_char(va_arg(args, int));
            else if (*format == 's')
                count += ft_print_str(va_arg(args, char *));
            else if (*format == 'p')
                count += ft_print_ptr(va_arg(args, void *));
            else if (*format == 'd' || *format == 'i')
                count += ft_printnbr(va_arg(args, int));
            else if (*format == 'u')
                count += ft_print_unsigned(va_arg(args, unsigned int));
            else if (*format == 'x')
                count += ft_print_hex(va_arg(args, unsigned int), 0);
            else if (*format == 'X')
                count += ft_print_hex(va_arg(args, unsigned int), 1);
            else if (*format == '%')
                count += ft_print_char('%');
        }
        else
        {
            count += ft_print_char(*format); // Print normal characters
        }
        format++;
    }

    va_end(args);
    return count; // Return total number of characters printed
}
