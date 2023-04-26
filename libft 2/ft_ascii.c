/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ascii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorhan <sorhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/08 20:22:01 by sorhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_ascii(int c)
{
    if (c <= 127 && c >= 0)
    {
        return 1;
    }
    return 0;
}