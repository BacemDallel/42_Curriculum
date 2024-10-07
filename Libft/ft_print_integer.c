/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacem <bacem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 23:14:13 by bacem             #+#    #+#             */
/*   Updated: 2024/10/06 08:23:22 by bacem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void ft_putnbr(int n)
{
    if (n < 0) // Handle negative numbers
    {
        ft_print_char('-'); // Print the negative sign
        n = -n; // Convert to positive
    }
    if (n >= 10) // Print recursively for numbers >= 10
    {
        ft_putnbr(n / 10); // Print the first half
    }
    ft_print_char((n % 10) + '0'); // Print the last digit
}

int ft_print_integer(int n)
{
    if (n == 0)
    {
        return ft_print_char('0'); // Handle zero explicitly
    }
    ft_putnbr(n); // Call the helper function to print the integer
    return 0; // The count will be updated in ft_putnbr
}
