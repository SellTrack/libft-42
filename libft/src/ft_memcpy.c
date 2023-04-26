/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selmanorhan <selmanorhan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/16 18:53:33 by selmanorhan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
   size_t i;
   
   if (!n || src == dst)
   return (dst);
   i = 0;
   while (i<n)
   {
       ((unsigned char *)dst)[i] = ((unsigned char*)src)[i];
    i++;
    }
   return(dst);
}

/*
int main()
{
    char em[] = "daft";
    char re[] = "punk";
    printf("%s", ft_memcpy(em, re, 2));
}
*/
