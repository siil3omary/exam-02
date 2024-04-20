/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.C                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelomari <aelomari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:22:58 by aelomari          #+#    #+#             */
/*   Updated: 2024/04/19 13:06:48 by aelomari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int nb)
{
	char	d;

	if (nb > 9)
		putnbr(nb / 10);
	d = nb % 10 + '0';
	write(1, &d, 1);
}
int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
        {
			putnbr(i);
			write(1, "\n", 1);
            
        }
        i++;
	}
}
