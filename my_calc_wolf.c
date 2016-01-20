/*
** my_calc_wolf.c for my_calc_wolf.c in /home/juliena/rendu/MUL_2013_wolf3d
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Sun Jan 12 20:05:42 2014 athomasjulien
** Last update Sun Jan 12 22:20:21 2014 athomasjulien
*/

#include	<math.h>
#include	"header.h"

int		my_wall_draw(float k, int x, t_my_img *img)
{
  int		i;

  if (k > 0)
    {
      i = 300 - (600 / (2 * k));
      while (i <= 300 + (600 / (2 * k)))
        {
          my_pixel_put_to_image(*img, x, i, 0x7F7F7F);
          i = i + 1;
        }
    }
  return (0);
}

float		my_x_intersection(t_char *charac, t_vcoord *coord, float k2)
{
  float		y;
  float		k1;
  int		x;

  x = -1;
  while (++x <= 10)
    {
      if (charac->x > coord->new_x)
        k1 = (x + 1 - charac->x) / coord->vx;
      else
        k1 = (x - charac->x) / coord->vx;
      y = charac->y + k1 * coord->vy;
      if (y >= 0 && y <= 10 &&
	  my_wall_present((int)y, (int)x) == 1 && k2 > k1 && k1 > 0)
        k2 = k1;
    }
  return (k2);
}

float		my_wall_pos(t_char *charac, t_vcoord *coord)
{
  float		x;
  float		y;
  float		k1;
  float		k2;

  y = -1;
  k2 = 100;
  if (coord->vy == 0 || coord->vx == 0)
    return (0);
  while (++y <= 10)
    {
      if (charac->y > coord->new_y)
        k1 = ((y + 1) - charac->y) / coord->vy;
      else
        k1 = (y - charac->y) / coord->vy;
      x = charac->x + k1 * coord->vx;
      if (x >= 0 && x <= 10 &&
          my_wall_present((int)y, (int)x) == 1 && k2 > k1 && k1 > 0)
        k2 = k1;
    }
  k2 = my_x_intersection(charac, coord, k2);
  return (k2);
}

int		my_pos_calc(t_char *charac, float x, t_my_img *img,
			    t_vcoord *coord)
{
  float		k;

  coord->x1 = 0.5;
  coord->y1 = (300 - x) / 600;
  coord->new_x = ((coord->x1 * cos(charac->alpha)) -
		  (coord->y1 * sin(charac->alpha))) + charac->x;
  coord->new_y = ((coord->x1 * sin(charac->alpha)) +
		  (coord->y1 * cos(charac->alpha))) + charac->y;
  coord->vx = (coord->new_x - charac->x);
  coord->vy = (coord->new_y - charac->y);
  if (x == 300)
    {
      coord->midvx = coord->vx;
      coord->midvy = coord->vy;
    }
  k = my_wall_pos(charac, coord);
  my_wall_draw(k, x, img);
  return (0);
}
