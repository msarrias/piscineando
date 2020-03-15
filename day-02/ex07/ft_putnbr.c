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

 void	ft_putnbr(int nb){
	 char number;
	 char peel_number;

	 if (nb <= 9)
	 {
		 number = 48 + nb % 10;
		 write(1, &number, 1);
	 } 
	 else
	 {
		 number = 48 + nb % 10;
		 write(1, &number, 1);

		 peel_number = nb / 10;
		 ft_putnbr(peel_number);
	 }
