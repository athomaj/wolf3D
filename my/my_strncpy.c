/*
** my_strncpy.c for my_strncpy.c in /home/juliena/rendu/Piscine-C-Jour_06
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Mon Oct  7 10:48:58 2013 athomasjulien
** Last update Thu Dec 19 13:45:22 2013 athomasjulien
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	a;

  a = 0;
  while (a < n)
    {
      if (n > my_strlen(src))
	dest[a] = '\0';
      else
	dest[a] = src[a];
      a = a + 1;
    }
  return (dest);
}
