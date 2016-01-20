/*
** my_putstr.c for my_putstr.c in /home/juliena/rendu/Piscine-C-Jour_04
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Thu Oct  3 12:20:34 2013 athomasjulien
** Last update Mon Nov 18 15:57:06 2013 athomasjulien
*/

void	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
}
