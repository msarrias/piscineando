/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmarina <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 17:19:03 by hmarina           #+#    #+#             */
/*   Updated: 2020/03/12 19:02:48 by hmarina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(char a, char b, char c, char d)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, " ", 1);
    write(1, &c, 1);
    write(1, &d, 1);
}

void	get_quotient_and_reminder_print(char ab, char cd)
{
    char a_quotient;
    char b_reminder;
    char c_quotient;
    char d_reminder;

    a_quotient = 48 + ab / 10;
    b_reminder = 48 + ab % 10;
    c_quotient = 48 + cd / 10;
    d_reminder = 48 + cd % 10;
    if (ab == 98 && cd == 99)
    {
        print_comb(a_quotient, b_reminder, c_quotient, d_reminder);
    }
    else
    {
        print_comb(a_quotient, b_reminder, c_quotient, d_reminder);
        write(1, ", ", 2);
    }
}

void	ft_print_comb2(void)
{
    char ab;
    char cd;

    ab = 0;
    while (ab <= 99)
    {
        cd = ab + 1;
        while (cd <= 99)
        {
            get_quotient_and_reminder_print(ab, cd);
            cd++;
        }
        ab++;
    }
}


int main(){
    ft_print_comb2();
}
