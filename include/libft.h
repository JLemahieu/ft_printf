/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemahie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:30:49 by jlemahie          #+#    #+#             */
/*   Updated: 2018/05/27 01:35:53 by jlemahie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "include.h"

void	ft_putbuff(t_flags *flags, unsigned int n);
void	ft_putcharb(t_flags *flags, char c);
void	ft_putstrb(t_flags *flags, const char *str);
int		ft_putnstrb(t_flags *flags, const char *str, unsigned int n);
void	ft_putnbrb(t_flags *flags, int n);
int		ft_wnstrl(wchar_t *str, int n);
int		ft_wcharlen(wchar_t c);
int		ft_wstrlen(wchar_t *str, t_flags *flags);
int		ft_putnwstrb(t_flags *flags, wchar_t *str, int n);
void	ft_putwcharb(t_flags *flags, wchar_t c);
int		ft_nbrlen(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
size_t	ft_strlen(const char *s);
void	ft_putnbr(int n);
int		ft_isdigit(int c);
char	*ft_strchr(const char *s, int c);
int		ft_atoi(const char *nptr);
void	debug(int n);
char	*ft_strndup(const char *s, int i);
int		ft_putnstr(const char *str, int n);
void	ft_bzero(void *s, size_t n);

#endif
