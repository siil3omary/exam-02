/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:13:33 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/20 15:21:10 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac , char **av)
{
    if(ac == 4)
    {
        int a , b;
         a = atoi(av[1]);
         b = atoi(av[3]);
        if(av[2][0] == '+')
            printf("%d", a + b);
        if(av[2][0] == '-')
            printf("%d", a - b);
        if(av[2][0] == '*')
            printf("%d", a * b);
        if(av[2][0] == '/')
            printf("%d", a / b);
        if(av[2][0] == '%')
            printf("%d", a % b);
    }

    write(1, "\n", 1);
}