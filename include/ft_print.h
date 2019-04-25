/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemahie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 23:50:15 by jlemahie          #+#    #+#             */
/*   Updated: 2018/05/19 03:00:21 by jlemahie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H
# include "include.h"

int	ft_print_s(va_list *args, t_flags *flags);
int	ft_print_ss(va_list *args, t_flags *flags);
int	ft_print_p(va_list *args, t_flags *flags);
int	ft_print_d(va_list *args, t_flags *flags);
int	ft_print_dd(va_list *args, t_flags *flags);
int	ft_print_o(va_list *args, t_flags *flags);
int	ft_print_oo(va_list *args, t_flags *flags);
int	ft_print_u(va_list *args, t_flags *flags);
int	ft_print_uu(va_list *args, t_flags *flags);
int	ft_print_x(va_list *args, t_flags *flags);
int	ft_print_xx(va_list *args, t_flags *flags);
int	ft_print_c(va_list *args, t_flags *flags);
int	ft_print_cc(va_list *args, t_flags *flags);
int	ft_print_perc(va_list *args, t_flags *flags);
int ft_print_inv(va_list *args, t_flags *flags);

#endif
