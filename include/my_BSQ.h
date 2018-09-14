/*
** my_BSQ.h for BSQ in /home/ouranos27/my_desktop/CPE/CPE_2016_BSQ_bootstrap/include
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Sun Dec 11 20:53:57 2016 philippe kam
** Last update Fri Jan 13 17:11:42 2017 philippe kam
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#include "lib/my/include/my_printf.h"

#ifndef MY_BSQ_H_
#define MY_BSQ_H_

typedef struct	s_coor
{
  char		**map;
  int		**square;
  char		*buffer;
  int		nb_rows;
  int		nb_cols;
}		t_coor;

typedef struct	s_pos
{
  int		x;
  int		y;
}		t_pos;

int		fs_open_file(char *filepath);
void		fs_understand_return_of_read(int fd, char *buffer, int size);
char		*fs_cat_x_bytes(char *filepath, t_coor map);
int		fs_get_number_from_first_line(char *filepath);
int		square_calcul(int **square, int x, int y);
int		**fill_square(t_coor map);//char **map, int nb_rows, int nb_cols);
void		display_map(t_coor map);//int **square, int nb_rows, int nb_cols);
char		**load_2d_arr_from_file(t_coor map);//char *buffer, int nb_rows, int nb_cols);
char		*load_file_in_mem(char *filepath);
int		get_nb_rows(t_coor map);//char *buffer);
int		get_nb_cols(t_coor map);
int		my_show_wordtab(char **tab);
void		my_putchar(char c);
t_pos		pos_save(int i, int j);
int		**maximus(t_coor map);//int **square, int nb_rows, int cols);
char		**tab_malloc(int nb_rows, int nb_cols);
int		**arr_malloc(int nb_rows, int nb_cols);
int		**final_map(t_coor map, int max, int x, int y);
void		print_buffer(t_coor map);

#endif /* MY_BSQ_H_ */
