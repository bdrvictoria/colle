
int		ft_putchar();

void	functie(int i, int j, int x, int y)
{
	if ((j == 1 && i == 1) || (j == 1 && i == y))
		ft_putchar('A');
	else
	{
		if ((j == x && i == 1) || (j == x && i == y))
			ft_putchar('C');
		else
		{
			if ((j > 1 && j < x && i == 1) || (i > 1 && i < y && j == 1))
				ft_putchar('B');
			else
			{
				if ((j > 1 && j < x) && (i > 1 && i < y))
					ft_putchar(' ');
				else
				{
					ft_putchar('B');
				}
			}
		}
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
		else
		{
			while (j <= x)
			{
				functie(i, j, x, y);
				j++;
			}
			ft_putchar(10);
			i++;
		}
	}
}
