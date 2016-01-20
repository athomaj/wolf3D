/*
** header.h for header.h in /home/juliena/Documents/graph/tp_droites
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Nov 21 17:14:20 2013 athomasjulien
** Last update Sun Jan 12 22:24:35 2014 athomasjulien
*/

#ifndef HEADER_H_
# define HEADER_H_

typedef struct	s_my_img
{
  void		*mlx_ptr;
  void		*win_ptr;
  void		*img_ptr;
  char          *data;
  int           bpp;
  int           sizeline;
  int           endian;
}		t_my_img;

typedef struct	s_char
{
  float		x;
  float		y;
  float		alpha;
}		t_char;

typedef struct	s_vec_coord
{
  float		new_x;
  float		new_y;
  float		x1;
  float		y1;
  float		vx;
  float		vy;
  float		midvx;
  float		midvy;
}		t_vcoord;

typedef struct	s_struct_point
{
  t_my_img	*img;
  t_char	*charac;
  t_vcoord	*coord;
}		t_point;

int		gere_expose(t_point *);
int		gere_key(int, void *);
t_my_img        my_pixel_put_to_image(t_my_img, int, int, int);
int		my_pos_calc(t_char *, float, t_my_img *, t_vcoord *);
void		my_wall(t_my_img *, t_char *, t_vcoord *);
int		my_wall_present(int , int );
int		my_wall_draw(float, int, t_my_img *);
float		my_x_intersection(t_char *, t_vcoord *, float);
float		my_wall_pos(t_char *, t_vcoord *);
int		my_pos_calc(t_char *, float, t_my_img *, t_vcoord *);
int		my_first_img(t_my_img *);
int		my_struct_init(t_point *);
void		my_movement(t_point *);

#endif /* !HEADER_H_ */
