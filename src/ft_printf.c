/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemahie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 03:33:49 by jlemahie          #+#    #+#             */
/*   Updated: 2018/05/27 01:51:10 by jlemahie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/include.h"
#include "../include/libft.h"

int	ft_parse(const char **format, va_list *args, t_flags *flags)
{
	int		ret;

	(*format)++;
	ft_set_flags(flags);
	if (**format == 0)
		return (0);
	ft_parse_indic((char**)format, flags);
	ft_parse_large((char**)format, flags, args);
	ft_parse_preci((char**)format, flags, args);
	ft_parse_taille((char**)format, flags);
	if (**format == 0)
		return (0);
	if (ft_parse_flag((char**)format, flags, "sxXcodiuOUDpCS") == NULL)
		return (0);
	(*format)++;
	ret = ft_exec(args, flags);
	return (ret);
}

int	ft_putnret(t_flags *flags, int ret, int n)
{
	ft_putbuff(flags, n);
	return (ret);
}

int	ft_inner_printf(const char *format, va_list *args, int size, t_flags *flags)
{
	char	*next_arg;
	int		size_arg;

	next_arg = ft_strchr(format, '%');
	if (*format == 0)
		return (ft_putnret(flags, size, BUFF_MAX));
	if (next_arg == NULL)
	{
		ft_putbuff(flags, BUFF_MAX);
		ft_putstr(format);
		return (size + ft_strlen(format));
	}
	if (next_arg > format)
	{
		ft_putnstrb(flags, format, next_arg - format);
		return (ft_inner_printf(next_arg, args, size +
					(next_arg - format), flags));
	}
	else
	{
		size_arg = ft_parse(&format, args, flags);
		if (size_arg == -1)
			return (ft_putnret(flags, -1, flags->backup));
		return (ft_inner_printf(format, args, size + size_arg, flags));
	}
}

int	ft_printf(const char *restrict format, ...)
{
	va_list	args;
	int		ret;
	t_flags flags;

	flags.i = 0;
	flags.backup = 0;
	va_start(args, format);
	ret = ft_inner_printf(format, &args, 0, &flags);
	va_end(args);
	return (ret);
}
