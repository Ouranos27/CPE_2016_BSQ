/*
** my_putchar.c for my_putchar in /home/ouranos27/my_desktop/CPE/CPE_2016_BSQ
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Fri Dec 16 18:05:36 2016 philippe kam
** Last update Fri Dec 16 18:06:20 2016 philippe kam
*/

#include "include/my_BSQ.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
