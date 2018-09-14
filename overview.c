/*
** overview.c for overview in /home/ouranos27/my_desktop/CPE/CPE_2016_BSQ
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Tue Dec 13 16:48:04 2016 philippe kam
** Last update Fri Jan 13 17:11:09 2017 philippe kam
*/

#include "include/my_BSQ.h"

void	free_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      free(tab[i]);
      i = i + 1;
    }
  free(tab);
}

void	free_arr(int **tab)
{
  int	i;

  i = 0;
  while (tab[i] != '\0')
    {
      free(tab[i]);
      i = i + 1;
    }
  free(tab);
}

char	**tab_malloc(int nb_rows, int nb_cols)
{
  int	i;
  char	**tab;

  i = 0;
  if ((tab = malloc(sizeof(char *) * nb_rows + 1)) == NULL)
    exit(84);
  while(i <= nb_rows)
    {
      if ((tab[i] = malloc(sizeof(char) * nb_cols + 1)) == NULL)
	exit(84);
      i = i + 1;
    }
  return (tab);
}

char		**load_2d_arr_from_file(t_coor map)
{
  int		i;
  int		j;
  int		k;

  i = 0;
  j = 0;
  while (map.buffer[i] != '\0')
    {
      k = 0;
      while (map.buffer[i] != '\n')
	{
	  map.map[j][k] = map.buffer[i];
	  i = i + 1;
	  k = k + 1;
	}
      while (map.buffer[i] == '\n')
	i = i + 1;
      map.map[j][k] = '\0';
      j = j + 1;
    }
  map.map[j] = '\0';
  //my_show_wordtab(map.map);
  return (map.map);
}

char	*new_buffer(t_coor map)
{
  int	i;

  i = 0;
  while (map.buffer[i] != '.')
    i = i + 1;
  if (map.buffer[i] == '.')
    map.buffer[i] = 'x';
  else if (map.buffer[i] != '.')
    return (map.buffer);
  return (map.buffer);
}

int		main(int ac, char **av)
{
  t_coor	map;
  struct stat	file;
  int		i;

  i = 0;
  if (ac != 2)
    return (0);
  if (stat(av[1], &file) == -1)
    exit(84);
  if ((map.buffer = malloc(sizeof(char) * file.st_size)) == NULL)
    exit(84);
  fs_cat_x_bytes(av[1], map);
  while (map.buffer[i] != '\0')
    {
      if (map.buffer[i] == '.')
	new_buffer(map);
      i = i + 1;
    }
  print_buffer(map);
  free(map.buffer);
  return (0);
}
