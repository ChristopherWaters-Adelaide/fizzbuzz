/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwaters <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 09:52:34 by cwaters           #+#    #+#             */
/*   Updated: 2021/12/21 10:32:45 by cwaters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int num, char c);

int	main(void)
{
	int		num;
	char	c;

	num = 1;
	c = '\0';
	while (num <= 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
			write (1, "FizzBuzz\n", 9);
		else if (num % 3 == 0)
			write (1, "Fizz\n", 5);
		else if (num % 5 == 0)
			write (1, "Buzz\n", 5);
		else
		{
			print_num(num, c);
		}
		num++;
	}
	return (1);
}

void	print_num(int num, char c)
{
	if (num > 9)
	{
		c = (char)(num / 10) + '0';
		write (1, &c, 1);
		c = (char)(num % 10) + '0';
		write (1, &c, 1);
		write (1, "\n", 1);
	}
	else
	{
		c = (char)num + '0';
		write (1, &c, 1);
		write (1, "\n", 1);
	}
}
