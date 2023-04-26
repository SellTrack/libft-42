/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorhan <sorhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/08 23:39:59 by sorhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t src_len;
    size_t dst_len;
    
    j = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (dstsize == 0)
        return (src_len);
    if (dstsize < dst_len)
        return (src_len + dstsize);
    else
    {
        i = dst_len;
        while (src[j] && (dst_len + j) < dstsize)
            dst[i++] = src[j++];
        if ((dst_len +j) == dstsize && dst_len < dstsize)
            dst[--i] = '\0';
        else
            dst[i] = '\0';
        return(src_len + dst_len);    
    }
}


int main()
{
    char a[] = "daft";
    char b[] = "punk";
    printf("%zu", ft_strlcat(a, b, 9));
    int i;
    
    i = 0;
    while(a[i])
    {
        printf("%c", a[i]);
        i++;
    }
}
// bozk 