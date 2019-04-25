/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlemahie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 01:13:57 by jlemahie          #+#    #+#             */
/*   Updated: 2018/05/27 01:35:20 by jlemahie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H
# define ABS(Value) (((Value) < 0 ? -(Value) : (Value)))
# define BUFF_MAX 500

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

typedef	struct	s_indic
{
	int	space;
	int	sign;
	int	left;
	int	zero;
	int	diese;
}				t_indic;

typedef	struct	s_flags
{
	t_indic			indic;
	int				large;
	int				preci;
	int				taille;
	int				flag;
	int				ptr;
	char			buff[BUFF_MAX];
	unsigned int	i;
	int				backup;
}				t_flags;

uintmax_t		ft_taillnbru(va_list *args, t_flags *flags);
char			*ft_putnbru(intmax_t n);
intmax_t		ft_taillnbr(va_list *args, t_flags *flags);
int				ft_patoi(char *str);
char			*ft_itoabase(uintmax_t n, char *sym);
void			ft_set_flags(t_flags *flags);
int				ft_printf(const char *restrict format, ...);
int				ft_inner_printf(const char *format, va_list *args, int size,
		t_flags *flags);
int				ft_parse(const char **format, va_list *args, t_flags *flags);
char			*ft_parse_flag(char **format, t_flags *flags, char *test);
char			*ft_parse_taille(char **format, t_flags *flags);
char			*ft_parse_preci(char **format, t_flags *flags, va_list *args);
char			*ft_parse_large(char **format, t_flags *flags, va_list *args);
char			*ft_parse_indic(char **format, t_flags *flags);
int				ft_exec(va_list *args, t_flags *flags);
int				ft_fill(int i, int size, char sym, t_flags *flags);

#endif
