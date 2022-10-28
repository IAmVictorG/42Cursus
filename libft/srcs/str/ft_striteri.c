/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:42:37 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 12:42:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    while (s[i])
    {
        f(i, s);
        i++;
    }
    
}
