/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:26:01 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 12:26:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char *result;

    i = 0;
    result = malloc((ft_strlen(s) + 1) * sizeof(char));
    if(!result)
        return (NULL);
    while (s[i])
    {
        result[i] = f(i,s[i]);
        i++;
    }
    result[i] = '\0';
    return (result);
}

