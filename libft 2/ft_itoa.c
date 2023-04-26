/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorhan <sorhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/23 02:30:06 by sorhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int find_len(int nbr)
{
        int nbr_len;

        nbr_len = 0;
        if (nbr <= 0)
                nbr_len++;
        while (nbr)
        {
                nbr /= 10;
                nbr++;
        }
        return (nbr_len);
}

char *ft_itoa(int n)
{
        char *str;
        int digit;

        digit = find_len(n);
        str = (char * ft_calloc(digit + 1, sizeof(char));
        if (!str)
        return(NULL);
        if(n == 0)
        *str = '0';
        else if (n < 0)
        {
                if (n == -2147483648)
                {
                        ft_strlcpy(str, "-2147483648", digit + 1);
                        return (str);
                }
                str[0] = '-';
                n *= -1;
        }
        while(n != 0)
        {
                *(str + --digit) = (n % 10) + '0';
                n = n / 10;
        }
        return (str);
}

/*
int main()
{
int a;
a = 987;
printf("%d", ft_itoa(a));
  return 0;
}
*/