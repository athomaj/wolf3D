/*
** my_nbrlen.c for my_nbrlen.c in /home/juliena/rendu/PSU_2013_my_printf/my
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Sun Nov 17 19:15:40 2013 athomasjulien
** Last update Sun Nov 17 19:22:10 2013 athomasjulien
*/

int	my_nbrlen(unsigned int a)
{
  int	i;

  i = 0;
  while (a != 0)
    {
      a = a / 10;
      i = i + 1;
    }
  return (i);
}
