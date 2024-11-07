/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:45:40 by mouad             #+#    #+#             */
/*   Updated: 2024/11/07 10:00:24 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  count_words(const char  *s,char c)
{
    int count;
    count = 0;
    while(*s)
    {
        while(*s == c)
            s++;

        if(*s != '\0')
            count++;

        while(*s && *s != c)
            s++;
    }
    return count;
}
int main(void)
{
    const char  *s = "ben,mahmoud,mouad";
    char delimiter = ',';
    printf("%d\n",count_words(s,delimiter));
    return 0;
}