/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:18:16 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/19 13:55:25 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char    *ft_strcpy(char *s2, char *s1)
{
    int i;
    
    i = 0;
    while(s1[i])
    {
        s2[i]  = s1[i];
        i++;
    }
    s2[i] = '\0';
    
    return s2;
}
    