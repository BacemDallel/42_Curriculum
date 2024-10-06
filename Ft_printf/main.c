/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacem <bacem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:40:21 by bacem             #+#    #+#             */
/*   Updated: 2024/10/06 10:40:22 by bacem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
    ft_printf("Char: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Pointer: %p\n", &main);
    ft_printf("Decimal: %d\n", 12345);
    ft_printf("Unsigned: %u\n", 12345);
    ft_printf("Hex (lowercase): %x\n", 255);
    ft_printf("Hex (uppercase): %X\n", 255);
    ft_printf("Percent: %%\n");

    return 0;
}
