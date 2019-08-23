/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 21:04:07 by kfalia-f          #+#    #+#             */
/*   Updated: 2019/08/23 19:46:52 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

void	ft_plus_space(char **tmp, t_flags *fl)
{
	if (fl->bits.plus)
		*tmp = ft_strjoinre(*tmp, "+", 1);
	else if (fl->bits.space)
		*tmp = ft_strjoinre(*tmp, " ", 1);
}

void	ft_hesh(char **tmp, t_flags *fl)
{
	if (fl->bits.o)
		*tmp = ft_strjoinre(*tmp, "0", 1);
	if (fl->bits.x)
		*tmp = ft_strjoinre(*tmp, "0x", 1);
	else if (fl->bits.upper_x)
		*tmp = ft_strjoinre(*tmp, "0X", 1);
}

char	*ft_minus(char *str, int len, t_flags *fl, int num)
{
	char	c;
	char	*tmp;
	int		i;

	c = ' ';
	if (fl->bits.null)
		c = '0';
	tmp = ft_memalloc(num + 1);
	i = -1;
	while (++i < len)
		tmp[i] = str[i];
	while (i < num)
		tmp[i++] = c;
	tmp[i] = '\0';
	ft_strdel(&str);
	return (tmp);
}

char	*ft_null(char *str, t_flags *fl, int num, char c)
{
	int		len;
	int		i;
	char	*tmp;

	if (fl->bits.null || num == fl->bits.len)
		c = '0';
	len = ft_strlen(str);
	if (!num || len > num)
		return (str);
	if (fl->bits.minus)
		return (ft_minus(str, len, fl, num));
	tmp = ft_memalloc(num + 1);
	i = 0;
	while (i < num - len)
		tmp[i++] = c;
	i = num - ft_lon(fl, 2);
	while (i < num - len)
		tmp[i++] = '0';
	len = 0;
	while (i < num)
		tmp[i++] = str[len++];
	tmp[i] = '\0';
	ft_strdel(&str);
	return (tmp);
}
