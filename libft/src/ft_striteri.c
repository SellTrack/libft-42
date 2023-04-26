/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selmanorhan <selmanorhan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/20 11:52:53 by selmanorhan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void *ft_striteri(char *s, void (*f)(unsigned int, char*))
{
  unsigned int i;
  if(!s || !f)
  return;
  i = 0;
  while (s[i])
  {
    f(i, &s[i]);
    i++;
  }
}

/*
char upper(unsigned int i, char s)
{
  char x;
  x = s - 32;
  return (x);
}
int main() 
{
  char bilal[] = "bilal";
  printf("%s", ft_strmapi(bilal, upper));
  printf("%s", bilal);
  return (0);
}
*/