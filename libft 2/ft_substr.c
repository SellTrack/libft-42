/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorhan <sorhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/23 17:48:48 by sorhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
        char *last;
        size_t i;
        size_t str_len;

        if (!s)
                return (NULL);
        str_len = ft_strlen(s);
        if (start >= str_len || str_len == 0 || len == 0)
                return (ft_strdup(""));
        if (len > str_len - start)
                len = str_len - start;
        last = (char *)malloc((len + 1) * sizeof(char));
        if (!last)
                return (NULL);
        i = 0;
        while (s[start + i] && i < len)
        {
                last[i] = s[start + i];
                i++;
        }
        last[i] = '\0';
        return (last);
}

int main()
{
        char ex[] = "blacklivesmatter";
        printf("%s", ft_substr(ex, 2, 6));
        return 0;
}
