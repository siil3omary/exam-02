/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:09:28 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/20 14:26:20 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac , char **av)
{
    if(ac == 2)
    {
        int i = 0;
        while (av[1][i])
        {
            if(av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = 'a' + 'z' - av[1][i];
            else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] = 'A' + 'Z' - av[1][i];

            write(1, &av[1][i], 1);
            i++;
        }
        
    }
     write(1, "\n", 1);
}