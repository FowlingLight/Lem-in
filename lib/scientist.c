/*
** scientist.c for scientist in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Tue Nov 13 15:44:39 2012 benjamin horiot
** Last update Fri Apr 26 11:38:52 2013 benjamin horiot
*/

#include "printf.h"

char	*rev(char *str)
{
  int	a;
  int	b;
  char	tmp[100];

  a = my_strlen(str) - 1;
  b = 0;
  while (a >= 0)
    {
      tmp[b] = str[a];
      a = a - 1;
      b = b + 1;
    }
  tmp[b] = 0;
  a = 0;
  while (a != my_strlen(tmp) + 1)
    {
      str[a] = tmp[a];
      a = a + 1 ;
    }
  return (str);
}

char	*modif(char *str, int up)
{
  int	a;
  char	tmp[100];

  a = 0;
  while (str[a] != 0)
    {
      tmp[a] = str[a];
      a = a + 1;
    }
  str[1] = '.';
  a = 2;
  while (tmp[a] != 0)
    {
      str[a] = tmp[a - 1];
      a = a + 1;
    }
  str[a] = tmp[a - 1];
  a = a + 1;
  if (up == 1)
    str[a] = 'E';
  else
    str[a] = 'e';
  str[a + 1] = '+';
  str[a + 2] = (a - 2) + 48;
  return (str);
}

int	scientist(int nbr, int up)
{
  int	a;
  char	*res;

  a = 0;
  res = malloc(100);
  while (nbr > 0)
    {
      res[a] = (nbr % 10) + 48;
      nbr = nbr / 10;
      a = a + 1;
    }
  if (my_strlen(res) == 1)
    {
      my_putchar(res[0]);
      return (0);
    }
  res = rev(res);
  res = modif(res, up);
  my_putstr(res);
  free(res);
  return (0);
}
