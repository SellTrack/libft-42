/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorhan <sorhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/08 23:09:07 by sorhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *tmp;
    tmp = ft_calloc(len,sizeof(char));
    ft_memcpy(tmp,src,len);
    ft_memcpy(dst,tmp,len);
    free(tmp);
    return (dst);
}

//i have a q for emre yilmaz there. why we make temp?
/*int main()
{
    const char *c = "deneme";
    int ret;
    ret = ft_strlen(c);
    printf("%d",ret);
}
*/