/*
** flags_2.c for flags in /home/pipolm.pk/PSU_2016_my_printf
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Sat Nov 19 16:36:50 2016 Philippe KAM
** Last update Sun Nov 20 16:06:56 2016 Philippe KAM
*/

#include <stdarg.h>
#include "include/my_printf.h"

void	flag_b(va_list ap)
{
  my_putnbr_base(va_arg(ap,unsigned long int), "01");
}

void	flag_p(va_list ap)
{
  my_putstr("0x");
  my_putnbr_base(va_arg(ap, unsigned long int), "0123456789abcdef");
}

void	flag_x(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef");
}

void	flag_X(va_list ap)
{
  my_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF");
}

void	flag_S(va_list ap)
{
  my_putstr_S(va_arg(ap, char *));
}
