/*
** my_show_wordtab.c for my_show_wordtab.c in /home/pipolm.pk/CPool_Day08/task03
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Fri Oct 14 10:25:47 2016 Philippe KAM
** Last update Sat Dec 17 15:02:18 2016 philippe kam
*/

#include "include/my_BSQ.h"

int	my_show_wordtab(char **tab)
{
  int	i;
  int	j;

  i = 0;
  while (tab[i] != '\0')
    {
      j = 0;
      while (tab[i][j] != '\0')
	{
	  my_putchar(tab[i][j]);
	  j = j + 1;
	}
      my_putchar('\n');
      i = i + 1;
    }
  return(0);
}
