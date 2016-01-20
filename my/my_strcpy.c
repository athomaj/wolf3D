/*
** my_strcpy.c for my_strcpy.c in /home/juliena/rendu/Piscine-C-Jour_06/ex_01
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Mon Oct  7 09:43:22 2013 athomasjulien
** Last update Sun Nov 24 13:13:28 2013 athomasjulien
*/

char	*my_strcpy(char *dest, char *src)
{
  int	a;

  a = 0;
  while (src[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  dest[a] = '\0';
  return (dest);
}
