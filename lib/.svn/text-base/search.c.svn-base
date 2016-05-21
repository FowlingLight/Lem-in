/*
** search.c for search in /home/b3nja13/Documents/printf
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Sat Nov 17 10:35:25 2012 benjamin horiot
** Last update Fri Apr 26 11:07:03 2013 benjamin horiot
*/

#include "printf.h"

void	search(const char *format, int a,  va_list av,
	       void (*tabfct[25])(va_list), char *tabflag)
{
  int	b;

  b = 0;
  while (format[a] != tabflag[b] && tabflag[b] != 0)
    b = b + 1;
  if (tabflag[b] != 0)
    tabfct[b](av);
  else
    {
      my_putchar(format[a - 1]);
      my_putchar(format[a]);
    }
}
