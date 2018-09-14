/*
** infos.c for infos in /home/ouranos27/my_desktop/CPE/CPE_2016_BSQ
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Thu Dec 15 17:05:53 2016 philippe kam
** Last update Fri Jan 13 17:10:43 2017 philippe kam
*/

#include "include/my_BSQ.h"

int		get_nb_rows(t_coor map)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (map.buffer[j] != '\0')
    {
      if (map.buffer[j] == '\n')
	i = i + 1;
      j = j + 1;;
    }
  return (i - 1);
}

int		get_nb_cols(t_coor map)//char *buffer)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (map.buffer[i] != '\n')
    i = i + 1;
  while (map.buffer[i + j + 1] != '\n')
    j = j + 1;
  return (j);
}

void	print_buffer(t_coor map)
{
  int	i;
  
  i = 0;
  while (map.buffer[i] != '\n')
    i = i + 1;
  i = i + 1;
  while (map.buffer[i] != '\0')
    {
      my_printf("%c", map.buffer[i]);
      i = i + 1;
    }
  my_printf("\n");
}
