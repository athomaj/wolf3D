/*
** my_swap.c for my_swap.c in /home/juliena/rendu
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Oct  3 10:02:42 2013 athomasjulien
** Last update Thu Dec 19 13:12:46 2013 athomasjulien
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
