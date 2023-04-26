/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selmanorhan <selmanorhan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/19 12:53:57 by selmanorhan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcpy(const void *s1, const void *s2, size_t n)
{
    const unsigned char *string_s1;
    const unsigned char *string_s2;
    size_t i;
    
    i = 0;
    string_s1 = (const unsigned char *)s1;
    string_s2 = (const unsigned char *)s2;
    while (i < n)
    {
        if (string_s1[i] != string_s1[i])
                return(string_s1[i] - string_s2[i]);
        i++;
    }
    return(0);
}

/*
int main()
{
    char em[] = "daft";
    char re[] = "punk";
    printf("%s", ft_memcpy(em, re, 2));
}
*/
