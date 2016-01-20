/*
** my_power_it.c for my_power_it.c in /home/juliena/rendu/Piscine-C-Jour_05
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Sun Oct  6 16:36:49 2013 athomasjulien
** Last update Thu Dec 19 13:20:47 2013 athomasjulien
*/

int	my_power_it(int nb, int power)
{
  int	a;
  int	b;

  b = power;
  a = nb * nb;
  while (b > 2)
    {
      a = nb * a;
      b = b - 1;
    }
  if (power > 1)
    return (a);
  if (power < 0)
    return (0);
  if (power == 0)
    return (1);
  if (power == 1)
    return (nb);
}
