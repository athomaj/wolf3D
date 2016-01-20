/*
** my_power_it_unsigned.c for my_power_it_unsigned.c in /home/juliena/rendu/PSU_2013_my_printf/my
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Fri Nov 15 14:53:02 2013 athomasjulien
** Last update Thu Dec 19 13:45:42 2013 athomasjulien
*/

int		my_power_it_unsigned(unsigned int nb, unsigned int power)
{
  unsigned int	a;
  unsigned int	b;

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
