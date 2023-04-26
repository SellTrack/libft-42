/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selmanorhan <selmanorhan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:47:53 by selmanorhan       #+#    #+#             */
/*   Updated: 2022/12/02 10:58:52 by selmanorhan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"


void	*ft_memchr(const void *ptr, int c, size_t len)
{
	unsigned char	*emptr;
	unsigned char	nc;

	emptr = (unsigned char *)ptr;
	nc = (unsigned char)c;
	while (len > 0)
	{
		if (*emptr == nc)
			return (emptr);
		emptr++;
		len--;
	}
	return (NULL);
}

int main()
{
	char miuv[] = "kediler miyavlar";
	
	printf("%p", ft_memchr(miuv, 'v', 17));
}
