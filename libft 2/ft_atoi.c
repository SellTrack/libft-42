/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selmanorhan <selmanorhan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/16 21:25:28 by selmanorhan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    long int number;
    int sign;

    sign = 1;
    number = 0;
    while ((*str >= 9 && *str <= 13) || (*str == 32))
    {
        str++;
        if(*str == '-' || *str == '+')
        {
                if (*str == '-')
                        sign = -1;
                str++;
        }
        while(*str != 0 && *str >= '0' && *str <= '9')
    {
        number = number * 10 + (*str - '0') * sign;
		if (number > 2147483647)
			return (-1);
		if (number < -2147483648)
			return (0);
		str++;
    }
    return (number);
}


/*
int main()
{
	char x[] = "  -1456miuv";
	int result;
	result = ft_atoi(x);
	printf("%d", result);
}
*/