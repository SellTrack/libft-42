/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selmanorhan <selmanorhan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/16 21:34:29 by selmanorhan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t tot_size;
    void *dst;
    
    tot_size = size * count;
    dst = malloc(tot_size);
    if (!(dst))
            return (0);
    ft_memset(dst,0,tot_size);
    return(dst);
    }

/*
int main()
{
    char x[] = "yalansa dogru de";
    char y[] = "do";
    printf("%s", ft_strnstr(x, y, 10));
}
*/