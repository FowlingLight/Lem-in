/*
** my_getnbr.c for my_getnbr in /home/b3nja13/Documents/svn/push_swap/lib
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Thu Dec 20 15:28:42 2012 benjamin horiot
** Last update Fri Apr 26 11:05:36 2013 benjamin horiot
*/

#include "printf.h"

int		my_getnbr(char *str)
{
  int	nb;
  int	a;
  int	sign;

  sign = 1;
  nb = 0;
  a = 0;
  while (str[a] == '+' || str[a] == '-')
    if (str[a++] == '-')
      sign = sign * -1;
  while (str[a] >= '0' && str[a] <= '9' && str[a] != '\0')
    {
      if (nb > 2147483646 / 10)
	return (0);
      nb = nb * 10 + (str[a++] - '0');
    }
  nb = nb * sign;
  return (nb);
}
