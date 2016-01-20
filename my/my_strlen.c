/*
** my_strlen.c for my_strlen.c in /home/juliena/rendu/Piscine-C-Jour_04
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Oct  3 16:34:51 2013 athomasjulien
** Last update Fri Nov 22 13:52:08 2013 athomasjulien
*/

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    a = a + 1;
  return (a);
}
