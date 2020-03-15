/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 22:10:08 by hmarina           #+#    #+#             */
/*   Updated: 2020/03/12 14:40:01 by hmarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_end_comb(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
}

void	print_comb(char a, char b, char c)
{
    char sep;
    char space;

    sep = ',';
    space = ' ';
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
    write(1, &sep, 1);
    write(1, &space, 1);
}

void	verify_and_print_comb(char a, char b, char c)
{
    if (a < b && b < c)
    {
        if (a == 55 && b == 56 && c == 57)
        {
            print_end_comb(a, b, c);
        }
        else
        {
            print_comb(a, b, c);
        }
    }
    else
    {
        ;
    }
}

void	ft_print_comb(void)
{
    char a;
    char b;
    char c;

    a = 48;
    while (a <= 57)
    {
        b = 48;
        while (b <= 57)
        {
            c = 48;
            while (c <= 57)
            {
                verify_and_print_comb(a, b, c);
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(){
    ft_print_comb();
}