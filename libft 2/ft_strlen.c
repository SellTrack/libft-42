/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selmanorhan <selmanorhan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/19 12:55:02 by selmanorhan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i;
    i = 0;
    
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

/*int main()
{
    const char *c = "deneme";
    int ret;
    ret = ft_strlen(c);
    printf("%d",ret);
}
*/