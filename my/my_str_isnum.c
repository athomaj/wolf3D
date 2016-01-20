/*
** my_str_isnum.c for my_str_isnum.c in /home/juliena/backup/backup makefile
** 
** Made by athomasjulien
** Login   <juliena@epitech.net>
** 
** Started on  Mon Oct 21 13:46:10 2013 athomasjulien
** Last update Wed Dec 18 18:16:02 2013 athomasjulien
*/

int	my_str_isnum(char *str)
{
  int	a;

  a = 0;
  if (str[0] == '-')
    str = str + 1;
  while (str[a])
    {
      if (str[a] >= 48 && str[a] <= 57)
	a = a + 1;
      else
	return (-1);
    }
  return (1);
}
