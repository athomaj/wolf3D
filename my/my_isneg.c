/*
** my_isneg.c for my_isneg.c in /home/juliena/rendu/Piscine-C-Jour_03
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Wed Oct  2 13:19:27 2013 athomasjulien
** Last update Thu Dec 19 13:39:48 2013 athomasjulien
*/

int	my_isneg(int nb)
{
  if (nb < 0)
    my_putchar('N');
  else
    my_putchar('P');
}
