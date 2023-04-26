/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorhan <sorhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/08 22:07:40 by sorhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    char *ptr;
    size_t index;

    ptr = (char *)b;
    index = 0;
    while (index < len)
    {
        ptr[index] = c;
        index++;
    }
    return (ptr);
}

/*
int main()
{
    char dizi[] = "blablabla";
    printf("%s", ft_memset(dizi, 'o', 6));
    return (0);
}
*/