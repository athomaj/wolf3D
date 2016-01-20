/*
** my_gestion.c for my_gestion.c in /home/juliena/rendu/MUL_2013_wolf3d
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Dec 19 14:35:52 2013 athomasjulien
** Last update Sun Jan 12 23:29:32 2014 athomasjulien
*/

#include	<stdlib.h>
#include	<math.h>
#include	"X.h"
#include	"mlx.h"
#include	"header.h"

void		my_movement(t_point *my_point)
{
  if (my_wall_present(my_point->charac->y, my_point->charac->x + 0.5
		      * my_point->coord->midvx) == 0)
    my_point->charac->x = my_point->charac->x + 0.5 * my_point->coord->midvx;
  if (my_wall_present(my_point->charac->y + 0.5 * my_point->coord->midvy,
		      my_point->charac->x) == 0)
    my_point->charac->y = my_point->charac->y + 0.5 * my_point->coord->midvy;
}

int		gere_key(int keycode, void *param)
{
  t_point	*my_point;

  my_point = param;
  if (keycode == 65307)
    exit(0);
  if (keycode == 65362)
    my_movement(my_point);
  if (keycode == 65364)
    {
      if (my_wall_present(my_point->charac->y, my_point->charac->x - 0.5
			  * my_point->coord->midvx) == 0)
	my_point->charac->x = (my_point->charac->x - 0.5
			       * my_point->coord->midvx);
      if (my_wall_present(my_point->charac->y - 0.5 * my_point->coord->midvy,
			  my_point->charac->x) == 0)
	my_point->charac->y = (my_point->charac->y - 0.5
			       * my_point->coord->midvy);
    }
  if (keycode == 65361)
    my_point->charac->alpha = my_point->charac->alpha + 0.3;
  else if (keycode == 65363)
    my_point->charac->alpha = my_point->charac->alpha - 0.3;
  my_wall(my_point->img, my_point->charac, my_point->coord);
  return (0);
}

int		gere_expose(t_point *my_point)
{
  mlx_put_image_to_window(my_point->img->mlx_ptr, my_point->img->win_ptr,
			  my_point->img->img_ptr, 0, 0);
  return (0);
}
