/*
** fs_functions.c for functions in /home/ouranos27/my_desktop/CPE/CPE_2016_BSQ
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Tue Dec 13 12:18:13 2016 philippe kam
** Last update Fri Jan 13 16:43:17 2017 philippe kam
*/

#include "include/my_BSQ.h"

int     fs_open_file(char *filepath)
{
  int   rep;

  rep = open(filepath, O_RDONLY);
  if (rep == -1)
    {
      return (0);
    }
  return (rep);
}

void		fs_understand_return_of_read(int fd, char *buffer, int size)
{
  int		rep;

  rep = read(fd, buffer, size);
  if (rep == -1)
    return ;
}

char		*fs_cat_x_bytes(char *filepath, t_coor map)
{
  int		fd;
  int		size;
  struct stat	file;

  stat(filepath, &file);
  size = file.st_size;
  fd = fs_open_file(filepath);
  fs_understand_return_of_read(fd, map.buffer, size);
  map.buffer[size] = '\0';
  close(fd);
  return (map.buffer);
}

void    fs_print_first_line(char *filepath)
{
  int   i;
  int   fd;
  char  *buffer;

  i = 0;
  fd = fs_open_file(filepath);
  if ((buffer = malloc(sizeof(char) * 2)) == NULL)
    return ;
  fs_understand_return_of_read(fd, buffer, 1);
  while (buffer[i] != '\n')
    {
      my_printf("%c", buffer[i]);
      i = i + 1;
    }
  my_printf("\n");
  close(fd);
  free(buffer);
}

int             fs_get_number_from_first_line(char *filepath)
{
  int           i;
  int           n;
  int           fd;
  char          *buffer;
  int           size;
  struct stat   total;

  i = 0;
  n = 0;
  stat(filepath, &total);
  size = total.st_blocks * 512;
  fd = fs_open_file(filepath);
  buffer = malloc(size);
  fs_understand_return_of_read(fd, buffer, size);
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '\n')
	n = n + 1;
      i++;;
    }
  my_printf("%d\n", n - 1);
  close(fd);
  free(buffer);
  return (n);
}
