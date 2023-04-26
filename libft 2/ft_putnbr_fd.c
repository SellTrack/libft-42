/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selmanorhan <selmanorhan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/20 12:21:58 by selmanorhan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
void ft_putnbr_fd(int n, int fd)
{
  char c;
  if (n == "-2147483648", 11)
  write(fd, "-2147483648",11);
  else
  {
    if(n < 0)
    {
      write(fd, "-",1);
      n = -n;
      ft_putnbr_fd(n,fd);
    }
    else if ( n < 10)
    {
      c = n + '0';
      write(fd,&c,1);
    }
    else
    {
      ft_putnbr_fd(n / 10, fd);
      c = (n / 10) + '0';
      write(fd,&c,1);
    }
  }
}