/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selmanorhan <selmanorhan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:09:51 by sorhan            #+#    #+#             */
/*   Updated: 2022/10/20 16:42:52 by selmanorhan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
  t_list *ptr;

  if(*lst == NULL)
  *lst = new;
  else
  {
    ptr = *lst;
    while(ptr->next != NULL)
    ptr = ptr->next;
    ptr->next = new;
  }
}
