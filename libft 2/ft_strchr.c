/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorhan <sorhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/09 10:21:11 by sorhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while (*s && *s != (char)c)
            s++;
    if (*s == (char)c)
        return ((char *)s);
    return (NULL);
    
}

/* iki harf yazdırıyor hmmm

int	main()
{
	char a[] = "promotion";
	
	printf("ft_:%s", ft_strchr(a, 'm'));
}
*/