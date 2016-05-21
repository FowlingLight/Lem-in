/*
** lib.c for lib in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Mon Nov 12 09:21:48 2012 benjamin horiot
** Last update Fri Apr 26 11:05:27 2013 benjamin horiot
*/

#include "printf.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstroct(char *str)
{
  int	a;

  a = 0;
  while (str[a] != 0)
    {
      if (str[a] < 32 || str[a] >= 127)
	octal(str[a]);
      else
	my_putchar(str[a]);
      a = a + 1;
    }
}

void	my_putnbrs(int nbr)
{
  if (nbr == -2147483648)
    {
      overneg();
      return;
    }
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = nbr * -1;
    }
  if (nbr > 9)
    {
      my_putnbrs(nbr / 10);
      my_putnbrs(nbr % 10);
    }
  else
    my_putchar(nbr + '0');
}

void	my_putnbrus(unsigned int nbr)
{
  if (nbr > 9)
    {
      my_putnbrus(nbr / 10);
      my_putnbrus(nbr % 10);
    }
  else
    my_putchar(nbr + 48);
}

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != 0)
    a = a + 1;
  return (a);
}
