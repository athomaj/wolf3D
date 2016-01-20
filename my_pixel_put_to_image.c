/*
** my_pixel_put_to_image.c for my_pixel_put_to_image.c in /home/juliena/rendu/MUL_2013_wolf3d
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Dec 19 14:05:19 2013 athomasjulien
** Last update Thu Jan  9 09:06:22 2014 athomasjulien
*/

#include	"header.h"

t_my_img	my_pixel_put_to_image(t_my_img img, int x, int y, int color)
{
  int		a;
  int		b;
  unsigned char	*col;

  if (x >= 600 || y >= 600 || x < 0 || y < 0)
    return (img);
  col = (unsigned char *)&color;
  a = img.bpp / 8;
  b = img.sizeline;
  img.data[(x * a) + 0 + (y * b)] = col[0];
  img.data[(x * a) + 1 + (y * b)] = col[1];
  img.data[(x * a) + 2 + (y * b)] = col[2];
  img.data[(x * a) + 3 + (y * b)] = col[3];
  return (img);
}
