/*
** my_power_rec.c for my_power_rec.c in /home/juliena/rendu/Piscine-C-Jour_05
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Mon Oct  7 22:43:29 2013 athomasjulien
** Last update Tue Oct  8 20:57:47 2013 athomasjulien
*/

int	my_power_rec(int nb, int power)
{
  if (power < 0)
    return (0);
  if (power == 0)
    return (1);
  return (my_power_rec(nb, power - 1) * nb);
}
