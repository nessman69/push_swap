/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   checker.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/01 13:38:33 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/05 15:18:56 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, const char *argv[])
{
	t_queues	s_c;

	s_c.queue_a = NULL;
	if (argc > 1)
	{
		if (!parse_param(++argv, &(s_c.queue_a)))
			ft_printf("{bold}Error\n{eoc}");
		else
		{
			display_queue(s_c.queue_a);
			s_c.queue_b = init();
			while (get_next_line(0, &(s_c.operation)))
			{
				push_swap(s_c);
				ft_printf("%s",s_c.operation);
			}
		}
		//queue_clr(&queue);
	}
	return (0);
}
