/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbadareu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 02:06:25 by vbadareu          #+#    #+#             */
/*   Updated: 2017/08/13 22:43:57 by vbadareu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar();

void	functie(int i, int j, int x, int y)
{
	if ((j == 1 && i == 1) || (j == 1 && i == y))
	{
		ft_putchar('o');
	}
	if ((j == x && i == 1 && j != 1) || (j == x && i == y && i != 1 && j != 1))
	{
		ft_putchar('o');
	}
	if (j > 1 && j < x && (i == 1 || i == y))
	{
		ft_putchar('-');
	}
	if (i > 1 && i < y && (j == 1 || j == x))
	{
		ft_putchar('|');
	}
	if ((j > 1 && j < x) && (i > 1 && i < y))
	{
		ft_putchar(' ');
	}
}

void	colle(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		if (x <= 0 || y <= 0)
		{
			return ;
		}
		while (j <= x)
		{
			functie(i, j, x, y);
			j++;
		}
		ft_putchar(10);
		i++;
	}
}
