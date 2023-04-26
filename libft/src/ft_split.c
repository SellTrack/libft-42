/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorhan <sorhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/23 14:22:04 by sorhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char **ft_split(char const *s, char c)
{
        char **arr;
        unsigned int j;
        unsigned int a;

        if (!s)
                return (NULL);
        arr = (char **)ft_calloc(str_in_array(s, c) + 1, sizeof(char *));
        if (!arr)
                return (NULL);
        a = -1;
        while (*s)
        {
                if (*s == c)
                        s++;
                else
                {
                        j = 0;
                        while (*s != c && *s && ++j)
                                s++;
                        arr[++a] = (char *)ft_calloc(j + 1, sizeof(char));
                        ft_strlcpy(arr[a], s - j, j + 1);
                }
        }
        return (arr);
}

unsigned int str_in_array(const char *s, char delimiter)
{
        unsigned int counter;
        counter = 0;
        while (*s)
        {
                if (*s == delimiter)
                        s++;
                else
                {
                        while (*s != dleimiter && *s)
                                s++;
                        counter++;
                }
        }
        return (counter);
}