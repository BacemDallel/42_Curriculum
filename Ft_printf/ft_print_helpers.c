/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_helpers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacem <bacem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:38:50 by bacem             #+#    #+#             */
/*   Updated: 2024/10/06 10:38:57 by bacem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Print a single character
int ft_print_char(char c)
{
    write(1, &c, 1);
    return 1;
}

// Print a string
int ft_print_str(char *str)
{
    int count = 0;

    if (!str)
        return ft_print_str("(null)");
    while (*str)
    {
        count += ft_print_char(*str);
        str++;
    }
    return count;
}

// Print a number in hexadecimal (lowercase or uppercase)
int ft_print_hex(unsigned long n, int uppercase)
{
    int count = 0;
    char *hex_base;

    if (uppercase)
        hex_base = "0123456789ABCDEF";
    else
        hex_base = "0123456789abcdef";

    if (n == 0)
        return ft_print_char('0');

    if (n >= 16)
        count += ft_print_hex(n / 16, uppercase);

    count += ft_print_char(hex_base[n % 16]);
    return count;
}

// Print a pointer in hexadecimal format
int ft_print_ptr(void *ptr)
{
    unsigned long addr = (unsigned long)ptr;
    int count = ft_print_str("0x");

    count += ft_print_hex(addr, 0);
    return count;
}
