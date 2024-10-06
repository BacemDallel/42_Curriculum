/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacem <bacem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:39:32 by bacem             #+#    #+#             */
/*   Updated: 2024/10/06 10:39:35 by bacem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Print a signed integer
int ft_printnbr(int nb)
{
    int count = 0;

    if (nb == -2147483648)
        return ft_print_str("-2147483648");

    if (nb < 0)
    {
        count += ft_print_char('-');
        nb = -nb;
    }

    if (nb >= 10)
        count += ft_printnbr(nb / 10);

    count += ft_print_char((nb % 10) + '0');
    return count;
}

// Print an unsigned integer
int ft_print_unsigned(unsigned int n)
{
    int count = 0;

    if (n >= 10)
        count += ft_print_unsigned(n / 10);

    count += ft_print_char((n % 10) + '0');
    return count;
}
