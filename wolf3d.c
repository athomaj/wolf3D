/*
** wolf3d.c for wolf3d.c in /home/juliena/rendu/MUL_2013_wolf3d
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Dec 19 13:59:31 2013 athomasjulien
** Last update Sun Jan 12 23:31:07 2014 athomasjulien
*/

#include	<math.h>
#include	<stdlib.h>
#include	"header.h"
#include	"mlx.h"
#include	"X.h"

void		my_wall(t_my_img *img, t_char *charac, t_vcoord *coord)
{
  float		i;

  my_first_img(img);
  i = 0;
  while (i != 600)
    {
      my_pos_calc(charac, i, img, coord);
      i = i + 1;
    }
  mlx_put_image_to_window(img->mlx_ptr, img->win_ptr, img->img_ptr, 0, 0);
}

int		my_wall_present(int y, int x)
{
  int		laby[20][20]=
    {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

  if (laby[y][x] == 1)
    return (1);
  else
    return (0);
}

int		my_first_img(t_my_img *img)
{
  float		x;
  float		y;

  x = 0;
  while (x != 600)
    {
      y = -1;
      while (++y != 300)
	my_pixel_put_to_image(*img, x, y, 0x74D0F1);
      x = x + 1;
    }
  x = 0;
  while (x != 600)
    {
      y = 299;
      while (++y != 600)
        my_pixel_put_to_image(*img, x, y, 0x16B84E);
      x = x + 1;
    }
  mlx_put_image_to_window(img->mlx_ptr, img->win_ptr, img->img_ptr, 0, 0);
  return (0);
}

int		my_struct_init(t_point *my_point)
{
  my_point->charac = malloc(sizeof(*my_point->charac));
  my_point->img = malloc(sizeof(*my_point->img));
  my_point->coord = malloc(sizeof(*my_point->coord));
  if (my_point->charac == NULL || my_point->img == NULL
      || my_point->coord == NULL)
    return (-1);
  my_point->charac->x = 1.1;
  my_point->charac->y = 1.1;
  my_point->charac->alpha = 0;
  return (0);
}

int		main()
{
  t_point	my_point;

  if (my_struct_init(&my_point) == -1)
    return (1);
  if ((my_point.img->mlx_ptr = mlx_init()) == NULL)
    return (1);
  if ((my_point.img->win_ptr = mlx_new_window(my_point.img->mlx_ptr,
					      600, 600, "Wolf 3D")) == NULL)
    return (1);
  if ((my_point.img->img_ptr = mlx_new_image(my_point.img->mlx_ptr, 600, 600))
      == NULL)
    return (1);
  if ((my_point.img->data = mlx_get_data_addr(my_point.img->img_ptr,
					      &my_point.img->bpp,
					      &my_point.img->sizeline,
					      &my_point.img->endian)) == NULL)
    return (1);
  my_wall(my_point.img, my_point.charac, my_point.coord);
  mlx_hook(my_point.img->win_ptr, KeyPress, KeyRelease,
	   gere_key, &my_point);
  mlx_expose_hook(my_point.img->win_ptr, gere_expose, &my_point);
  mlx_loop(my_point.img->mlx_ptr);
  return (0);
}
