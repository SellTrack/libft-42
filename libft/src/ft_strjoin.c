/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selmanorhan <selmanorhan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/19 13:51:04 by selmanorhan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
        char *str;
        size_t i;
        size_t j;
        
        if(!s1)
                return(NULL);
        str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
        if(!str)
                return(NULL);
        i = 0;
        j = 0;
        while(s1[i])
        {
                str[j++] = s1[i];
                i++;
        }
        i = 0;
        while (s2[i])
        {
                str[j++] = s2[i];
                i++;
        }
        str[j] = '\0';
        return (str);
        
}

/*
int	main()
{
	char	ab[] = "oguz";
	char	ac[] = "han";
	printf("%s", ft_strjoin(ab, ac));
}
*/