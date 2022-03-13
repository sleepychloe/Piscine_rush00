/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:27:12 by yhwang            #+#    #+#             */
/*   Updated: 2022/03/13 17:27:38 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	err_msg(void)
{
	write(1, "The number is invalid. Try again\n", 33);
}

void	ft_print_first_line(int cnt_x, int x)
{
	while (cnt_x <= x)
	{
		if (cnt_x == 1)
			ft_putchar('A');
		else if (cnt_x == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		cnt_x++;
	}
}

void	ft_print_middle_line(int cnt_x, int x)
{
	while (cnt_x <= x)
	{
		if (cnt_x == 1)
			ft_putchar('B');
		else if (cnt_x == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		cnt_x++;
	}
}

void	ft_print_last_line(int cnt_x, int x)
{
	while (cnt_x <= x)
	{
		if (cnt_x == 1)
			ft_putchar('C');
		else if (cnt_x == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		cnt_x++;
	}	
}

void	rush(int x, int y)
{
	int	cnt_x;
	int	cnt_y;

	cnt_x = 1;
	cnt_y = 1;
	if (x < 0 || y < 0 || x > 2147483647 || y > 2147483647)
	{
		err_msg();
		return ;
	}
	while (cnt_y <= y)
	{
		if (cnt_y == 1)
			ft_print_first_line(cnt_x, x);
		else if (cnt_y == y)
			ft_print_last_line(cnt_x, x);
		else
			ft_print_middle_line(cnt_x, x);
		ft_putchar('\n');
		cnt_y++;
		cnt_x = 1;
	}
}
