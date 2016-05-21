/*
** convfct4.c for convfct4 in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Thu Nov 15 18:28:51 2012 benjamin horiot
** Last update Fri Apr 26 11:05:00 2013 benjamin horiot
*/

#include "printf.h"

void	fctzero(const char *format, int a)
{
  a = a + 1;
  if (format[a] == 'x' || format[a] == 'X')
    {
      my_putchar('0');
      my_putchar('x');
    }
  else if (format[a] != 'c' && format[a] != 'p' && format[a] != 's'
	   && format[a] != 'd' && format[a] != 'i' && format[a] != 'u')
    my_putchar('0');
}

void	fctmoins(const char *format, int a)
{
  int	b;

  a = a + 1;
  b = 0;
  my_putchar('1');
  if (format[a] <= '9' && format[a] >= '0')
    {
      my_putchar('a');
      while (b <= (format[a] - 48))
	{
	  my_putchar('b');
	  my_putchar(' ');
	  b = b + 1;
	}
      while (b >= 0)
	{
	  my_putchar('c');
	  my_putchar('\b');
	  b = b - 1;
	}
      my_putchar('d');
    }
  my_putchar('e');
}

void	fct0(const char *format, int a, va_list av)
{
  int	b;
  int	nbr;
  int	size;

  a = a + 1;
  b = 0;
  nbr = getnbrprint(format, a);
  size = getsizeint(va_arg(av, int), 0);
  while (b <= nbr)
    {
      my_putchar('0');
      b = b + 1;
    }
  while (b >= size)
    {
      my_putchar('\b');
      b = b - 1;
    }
}

void	overneg()
{
  my_putstr("-2147483648");
}
