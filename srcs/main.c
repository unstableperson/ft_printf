/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 16:41:51 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/08/17 21:19:22 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int		main()
{
	//char	*str = "test";
	//char	c = 'A';

	printf("%x %X\n", 123, 123);
	ft_printf("%x %X\n", 123, 123);
	//ft_printf("%d\n", str);
	//ft_printf("hi %X its %d mini %s       %c\n", 7467, -1000, str, c);
	//ft_printf("hi %X its %d mini %s       %c\n", 7467, -1000, str, c);
	//printf("hi %d %d %d\n", 123456789, 2, 3);
	return (0);
}
