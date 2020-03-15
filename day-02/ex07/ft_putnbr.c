/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 18:26:21 by hmarina           #+#    #+#             */
/*   Updated: 2020/03/12 19:21:33 by hmarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    reverse_digits(int num)
{
    int rev_num;

    rev_num= 0;
    while(num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

void    ft_writenbr(int nb)
{
    char number;

    number = 48 + nb % 10;
    write(1, &number, 1);
}

void    ft_putnbr(int nb)
{
   char number;
   char peel_number;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = - nb;
    }
    if (nb <= 9)
    {
        ft_writenbr(nb);
    }
    else
        {
        nb = reverse_digits(nb);
        ft_writenbr(nb);
        peel_number = nb / 10;
        ft_putnbr(peel_number);
        }
}